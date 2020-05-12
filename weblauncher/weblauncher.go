package main

import (
	//"bufio"

	"log"

	//"strings"
	"time"

	"github.com/juliofaura/raspaudio/weblauncher/server"
)

///////////////////////////////////////////////////
// Main function
///////////////////////////////////////////////////
func main() {

	log.Printf("Initializing %v with web port='%v'", server.HEADER_PAGE_TITLE, server.WEBPORT)

	server.StartWeb()

	for {
		time.Sleep(time.Second)
	}

}
