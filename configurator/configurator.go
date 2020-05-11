package main

import (
	//"bufio"
	"fmt"
	//"strings"
	"github.com/juliofaura/raspaudio/netUtils"
)

///////////////////////////////////////////////////
// Main function
///////////////////////////////////////////////////
func main() {

	fmt.Println("Finding my own IPs")

	fmt.Println("Outbound IP:", netUtils.GetOutboundIP().String())

	IPs := netUtils.ResolveHostIP()

	for _, v := range IPs {
		fmt.Printf("IP is %v (mask is %v)\n", v.IP, v.Mask)
	}

}
