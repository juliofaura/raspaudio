# raspaudio
Real time audio optimizations for Jamulus on raspberry pi 3

# System preparation for real time

- Set up overclocking:

check frequency with
```
cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq
```

Then set cpu to **performance** (put this in /etc/rc.local):
```
for cpu in /sys/devices/system/cpu/cpu[0-9]*; do echo -n performance | sudo tee $cpu/cpufreq/scaling_governor; done
```

Then measure again:
```
cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq
```

- Enable real time scheduling

Add permissions for the @audio user group in ```/etc/security/limits.conf``` and ```/etc/security/limits.d/audio.conf```

```
@audio     -    rtprio     99
@audio     -    memlock    unlimited
@audio     -    nice       -19
```


# Jamulus

Copy the installed version, then enable the QT libraries:

```
sudo apt update
sudo apt install -y libqt4-dev
```

(in a previous experience the following was sufficient:)
```
sudo apt install -y libqtgui4
sudo apt install -y libqt4-network
```


# Calling Jamulus from Windows

* Install XMing: https://sourceforge.net/projects/xming/, create icon for XLaunch
* Call XLaunch, Multiple windows, start no client, and click on "No access control" (important!)
* Call qjackctl with ```ssh pi@<pi's IP in here>  "export DISPLAY=$(echo $SSH_CLIENT|awk '{print $1}'):0;qjackctl"```
* Call Jamuuls with  ```ssh pi@<pi's IP in here>  "export DISPLAY=$(echo $SSH_CLIENT|awk '{print $1}'):0;qjackctl"```


# Controlling the sound card

The sound card can be controlled using ```alsamixer```, or graphically using ```alsamixergui``` (use ```sudo apt install alsamixergui``` to install).

In order to launch this remotely, you can use either:

```
lxterminal --display=192.168.1.23:0 --command alsamixer
```

or

```
alsamixergui --display=192.168.1.23:0 -c 1
```

(the ```-c 1``` option above selects sound card #1, you may need to tune this for your specific card)



# Web tools

## audioweb

```audioweb``` is a simple static page so windows clients can download the Xming installer (simply copied from the official site) and the raspberry finder / connector in a very easy way. You simple have clone the repository, move to the audioweb directory, ```go build``` and launch the web with ```./audioweb <port>```

## weblauncher

```weblauncher``` is a more interesting yet simple web tool that can be installed in the raspberry to allow windwos users launch and manage jack, Jamulus and the soundcard. To install it, just clone this repository, move to the weblauncher directory, ```go build``` and launch the web with ```./weblauncher```. This program uses the port 8777 for all communications

IMPORTANT: normally you would prefer ```weblauncher``` to be run upon boot, which entails calling it from a boot script. It is important to do so with the right permissions and, importantly, with the ability to schedule real time processes (i.e. with permission to run chrt for example), as this will be needed when weblauncher later on tries to run both qjackctl, jackd and Jamulus. This would NOT be the case if you try to run ```weblauncher``` from the ```rc.local``` script for example, even if you try sudo'ing. A good alternative way to do this is to simply establish a crontab for the pi user:

```
@reboot cd /home/pi/weblauncher; ./weblauncher &
```

This one is better to redirect output to a file:

```
@reboot cd /home/pi/weblauncher; ./weblauncher &>> ./weblauncher.log &
```


## connector

```connector``` is a simple tool to find the raspberry in a local area network. The program simply iterates throughout the local area network (based on the client IP and the netmask) and pings the weblauncher port (8777) in all the addresses. When it finds the raspberry, then it launches a browser pointing at the weblauncher, thus allowing the user to launch and manager qkackctl and Jamulus


# Running order

## From a windows laptop

Pre-requisite is to instal Xmin (https://sourceforge.net/projects/xming/) and run Xlaunch with "no access control", as explained above. And also have ```conector.exe``` at hand. You can download both things from http://cebollo.ddns.net

1. Plug the ethernet cable to the raspberry, thenp lug the power adapted to turn the raspberry on, and wait until it boots

2. In your laptop, run ```connector.exe``` and wait until the browser comes up with the raspberry weblauncher page. You can note and bookmark the url in the browser, so you don't need to look for it every time.

3. Click on ```Launch Qjackctl``` and:
  - Press "Setup"
  - Click on the "Parameters" tab and set "Sample Rate" to 48000, "Frames/Period" to 128, and "Periods/Buffer" to 2
  - Click on the "Advanced" tab and set "Priority" to 99, "PortMaximum" to 1024, and "Timeout" to 500. Then "Audio" to Duplex, Dither to "None", and make sure "Output device" and "Input Device" are set appropriately (i.e. using the sound card, not the default Alsa driver). Also the "Server Prefix" text box should have the following: ```chrt 99 nice -19 jackd". Finally, click on "OK" (or "Cancel" if you have not changed anything)
  - Click on "Start", so the jack server is run

4. Click on ```Launch Jamulus``` and:
  - Press "Connect" in the Qjackctl console
  - In the connections screen, make the appropriate connections. If you are using a simple sound card with a mono microphone input, you should connect the "capture_1" input from the "system" source to both inputs of the Jamulus writable client ("input left" and "input right")
  - In the Jamulus screen, press "Settings"
  - Uncheck the Jitter Buffer "Auto" box, and set both Jitter sliders ("Local" and "Server") to 5. Then set "Audio Channels" to "Stereo", "Audio Quality" to "High"
  - In the Jamulus main window, press "Connect"
  - In the "Server Name/Address" box, enter "cebollo.ddns.net", and press "Connect"

5. Enjoy! you should be connected now. You can turn down the volume of your own channel if you don't want to hear your own voice, and you can change the volumes of the different tracks to produce your own mix

6. Click on ```Launch sound card control``` if you want to configure and control the sound card (i.e. change the input / output levels, etc.)


=======

# Appendix: Real time linux core

## Real time distro

https://guysoft.wordpress.com/2017/10/09/realtimepi/
http://unofficialpi.org/Distros/RealtimePi/

Then install X11:

https://www.raspberrypi.org/forums/viewtopic.php?p=890408#p890408

i.e.: 

```
sudo apt-get install --no-install-recommends xserver-xorg
sudo apt-get install --no-install-recommends xinit
sudo apt-get install raspberrypi-ui-mods
sudo apt-get install --no-install-recommends raspberrypi-ui-mods lxsession
sudo apt-get install lightdm
```

Then you start X by typing ```startx```


## Building it in a raspberry

https://github.com/piscue/Realtime-Kernel-RaspberryPi

(better from a tmux!)

```
sudo apt update -y
sudo apt install -y git bc
sudo apt install -y libncurses5-dev
sudo apt install -y bison flex
git clone --depth=1 https://github.com/raspberrypi/linux
cd linux
KERNEL=kernel7
make bcm2709_defconfig
make menuconfig
make -j4 zImage modules dtbs
sudo make modules_install
sudo cp arch/arm/boot/*.dtb /boot/
sudo cp arch/arm/boot/dts/*.dtb /boot/
sudo cp arch/arm/boot/dts/overlays/*.dtb* /boot/overlays/
sudo cp arch/arm/boot/dts/overlays/README /boot/overlays/
sudo cp arch/arm/boot/zImage /boot/$KERNEL.img
```

