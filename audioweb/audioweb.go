package main

import (
	//"bufio"
	"fmt"
	"log"
	"os"

	//"strings"
	"time"

	"github.com/juliofaura/raspaudio/audioweb/server"
)

///////////////////////////////////////////////////
// Main function
///////////////////////////////////////////////////
func main() {

	args := os.Args
	if len(args) != 2 {
		fmt.Printf(
			`Error calling %s
Usage: %s <port>
Example: %s 8050\n`,
			args[0],
			args[0],
			args[0],
		)
		return
	}
	server.WEBPORT = args[1]

	log.Printf("Initializing %v with web port='%v'", server.HEADER_PAGE_TITLE, server.WEBPORT)

	server.StartWeb()

	for {
		time.Sleep(10 * time.Second)
	}

	/*
		for {
			reader := bufio.NewReader(os.Stdin)
			fmt.Print("Demobank console: ")
			s, _ := reader.ReadString('\n')
			command := strings.Fields(s)
			if len(command) >= 1 {
				switch command[0] {
				case "exit":
					fmt.Println("Have a nice day!")
					os.Exit(0)
				case "showBalance":
					// To do
					fmt.Printf("Not implemented yet, stay tuned\n")
				case "showTransfer":
					// To do
					fmt.Printf("Not implemented yet, stay tuned\n")
				default:
					fmt.Printf("Unknown command %v\n", command)
				}
			}
		}
	*/
}
