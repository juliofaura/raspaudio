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


# Installing the weblauncher

## 

# Running order

1. Plug in the HDMI cable, the ethernet cable, the audio interface, the keyboard and the mouse

2. Plug the power adapted to turn the raspberry on, and wait until it boots

3. Call ```qjackctl``` and:
  - Blah
  - Blah

4. Call ```Jamulus``` and connect:
  - Start it as a real time process with ```chrt 95 nice -n -19 ./Jamulus```
  - Blah

5. Enjoy


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

