package main

import (
	//"bufio"

	"io/ioutil"
	"log"
	"net/http"
	"os"
	"time"

	//"strings"

	audioserver "github.com/juliofaura/raspaudio/audioweb/server"
	"github.com/juliofaura/raspaudio/netUtils"
	"github.com/juliofaura/raspaudio/weblauncher/server"
)

const (
	URL          = "http://cebollo.ddns.net"
	PING_TIMEOUT = 10 * time.Second
)

///////////////////////////////////////////////////
// Main function
///////////////////////////////////////////////////
func main() {

	log.Printf("Initializing %v with web port='%v'", server.HEADER_PAGE_TITLE, server.WEBPORT)

	server.StartWeb()

	myHost, err := os.Hostname()
	if err == nil {
		server.HOSTNAME += myHost
	} else {
		server.HOSTNAME += "no_hostname"
	}

	for {
		myIP := netUtils.GetOutboundIP()
		myIPs := netUtils.ResolveHostIP()
		resolvedIPs := ""
		for i, v := range myIPs {
			if i > 0 {
				resolvedIPs += ","
			}
			resolvedIPs += v.IP
		}
		data := myIP.String() + "[" + resolvedIPs + "](" + server.HOSTNAME + ")"
		log.Println("Now pinging, data is", data)

		client := http.Client{
			Timeout: PING_TIMEOUT,
		}
		toTest := URL + "/ping?question=" + audioserver.PING_QUESTION + ";data=" + data
		resp, err := client.Get(toTest)
		if err == nil {
			body, err := ioutil.ReadAll(resp.Body)
			if err != nil {
				log.Println("Pinged but failed (Get succeeded but wrong body?), err was", err)
			}
			log.Println("Pinged, response was", string(body), "now sleeping")
			resp.Body.Close()
		} else {
			log.Println("Pinged but failed (Get failed), err was", err)
		}

		time.Sleep(time.Minute)
	}

}
