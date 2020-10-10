package main

import (
	"fmt"
	"math/rand"
	"os"
	"time"

	driver "gitlab.com/gomidi/rtmididrv"
	// driver "gitlab.com/gomidi/portmididrv"
)

func check(e error) {
	if e != nil {
		panic(e)
	}
}

// This example reads from the first input and and writes to the first output port
func main() {
	drv, err := driver.New()
	check(err)

	// make sure to close all open ports at the end
	defer drv.Close()

	ins, err := drv.Ins()
	check(err)

	outs, err := drv.Outs()
	check(err)

	for _, v := range ins {
		fmt.Println("IN:", v)
	}

	for _, v := range outs {
		fmt.Println("OUT:", v)
	}

	in, out := ins[0], outs[0]

	check(in.Open())
	check(out.Open())

	defer in.Close()
	defer out.Close()

	noteOff := []byte{0b10000001, 60, 127}
	noteOn := []byte{0b10010001, 60, 127}
	allSoundOff := []byte{0b10110001, 120, 0}

	out.Write(allSoundOff)
	time.Sleep(1 * time.Second)

	// noteOn[1] = 33
	// noteOff[1] = 33
	// out.Write(noteOn)
	// time.Sleep(1 * time.Second)
	// out.Write(noteOff)
	// time.Sleep(1 * time.Second)

	// rd := reader.New(
	// 	reader.NoLogger(),
	// 	// write every message to the out port
	// 	reader.Each(func(pos *reader.Position, msg midi.Message) {
	// 		fmt.Printf("got %s\n", msg)
	// 	}),
	// )

	// // listen for MIDI
	// err = rd.ListenTo(in)
	// check(err)

	speed := 50 * time.Millisecond

	for i := 1; i <= 20; i++ {
		j := rand.Intn(80) + 30
		noteOn[1] = byte(j)
		noteOff[1] = byte(j)
		out.Write(noteOn)
		time.Sleep(speed * time.Duration(rand.Intn(5)))
		out.Write(noteOff)
		time.Sleep(speed)
	}

	os.Exit(0)

	out.Write(allSoundOff)
	time.Sleep(1 * time.Second)

	for j := 0; j < 3; j++ {
		for i := 33; i <= 100; i++ {
			noteOn[1] = byte(i)
			noteOff[1] = byte(i)
			out.Write(noteOn)
			time.Sleep(speed)
			out.Write(noteOff)
			time.Sleep(speed)
			noteOn[1] = byte(i + 4)
			noteOff[1] = byte(i + 4)
			out.Write(noteOn)
			time.Sleep(speed)
			out.Write(noteOff)
			time.Sleep(speed)
		}

		for i := 99; i >= 34; i-- {
			noteOn[1] = byte(i)
			noteOff[1] = byte(i)
			out.Write(noteOn)
			time.Sleep(speed)
			out.Write(noteOff)
			time.Sleep(speed)
			noteOn[1] = byte(i - 4)
			noteOff[1] = byte(i - 4)
			out.Write(noteOn)
			time.Sleep(speed)
			out.Write(noteOff)
			time.Sleep(speed)
		}
	}

}
