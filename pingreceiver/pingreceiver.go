package main

import (
	//"bufio"
	"fmt"
	"log"
	"os"

	//"strings"
	"time"

	"github.com/juliofaura/raspaudio/pingreceiver/server"
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
Example: %s 8050
`,
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
		time.Sleep(time.Second)
	}

}
