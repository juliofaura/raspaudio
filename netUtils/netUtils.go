package netUtils

import (
	//"bufio"

	"log"
	"net"
	"net/http"
	//"strings"
)

// IPstruct  - basic data for IPs
type IPstruct struct {
	IP   string
	Mask string
}

// GetOutboundIP returns the preferred / default outbound IP
func GetOutboundIP() net.IP {
	conn, err := net.Dial("udp", "8.8.8.8:80")
	if err != nil {
		log.Fatal(err)
	}
	defer conn.Close()

	localAddr := conn.LocalAddr().(*net.UDPAddr)

	return localAddr.IP
}

// ResolveHostIP() returns the list of ipV4 addresses for this host, excluding loopbacks
func ResolveHostIP() (IPlist []IPstruct) {
	netInterfaceAddresses, err := net.InterfaceAddrs()
	if err == nil {
		for _, netInterfaceAddress := range netInterfaceAddresses {
			networkIP, ok := netInterfaceAddress.(*net.IPNet)
			if ok && !networkIP.IP.IsLoopback() && networkIP.IP.To4() != nil {
				ip := networkIP.IP.String()
				mask := networkIP.Mask.String()
				IPlist = append(IPlist, IPstruct{ip, mask})
			}
		}
	}
	return
}

// ReadUserIP returns the user's IP from an HTTP request
func ReadUserIP(r *http.Request) string {
	IPAddress := r.Header.Get("X-Real-Ip")
	if IPAddress == "" {
		IPAddress = r.Header.Get("X-Forwarded-For")
	}
	if IPAddress == "" {
		IPAddress = r.RemoteAddr
	}
	a, _, err := net.SplitHostPort(IPAddress)
	if err == nil {
		return a
	} else {
		return "Not an IP:port - " + IPAddress
	}
}
