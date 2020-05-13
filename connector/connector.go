package main

import (
	//"bufio"
	"encoding/json"
	"errors"
	"fmt"
	"io/ioutil"
	"log"
	"net/http"
	"os/exec"
	"runtime"
	"strings"
	"time"

	"github.com/juliofaura/raspaudio/netUtils"
	"github.com/juliofaura/raspaudio/weblauncher/server"
)

func testIP(url string) (found bool, err error) {
	client := http.Client{
		Timeout: 200 * time.Millisecond,
	}
	toTest := url + "/ping?question=" + server.QUESTION
	resp, thiserr := client.Get(toTest)
	if thiserr != nil {
		err = thiserr
		return
	}
	defer resp.Body.Close()
	body, thiserr := ioutil.ReadAll(resp.Body)
	if thiserr != nil {
		err = thiserr
		return
	}
	var body_itf map[string]interface{}
	err = json.Unmarshal(body, &body_itf)
	if err != nil {
		return
	}
	success, ok := body_itf["Success"].(bool)
	if !ok {
		err = errors.New("Wrong response from service")
		return
	}
	if !success {
		errMsg, ok := body_itf["Data"].(string)
		if !ok {
			err = errors.New("Wrong response from service")
			return
		}
		err = errors.New(errMsg)
		return
	}
	message, ok := body_itf["Data"].(string)
	if !ok {
		err = errors.New("Wrong response from service")
		return
	}
	found = message == server.PING_RESPONSE
	return
}

func openbrowser(url string) {
	var err error

	switch runtime.GOOS {
	case "linux":
		err = exec.Command("xdg-open", url).Start()
	case "windows":
		err = exec.Command("rundll32", "url.dll,FileProtocolHandler", url).Start()
	case "darwin":
		err = exec.Command("open", url).Start()
	default:
		err = fmt.Errorf("unsupported platform")
	}
	if err != nil {
		log.Fatal(err)
	}
}

///////////////////////////////////////////////////
// Main function
///////////////////////////////////////////////////
func main() {

	fmt.Println("Welcome to the raspberry configurator")
	fmt.Println("Now trying to find a raspberry in the current LAN")
	myIP := netUtils.GetOutboundIP()
	bytes := strings.Split(myIP.String(), ".")
	var raspberryIP string
	var found bool
	for i := 0; i < 256; i++ {
		raspberryIP = fmt.Sprintf("http://%s.%s.%s.%d:%s", bytes[0], bytes[1], bytes[2], i, server.WEBPORT)
		fmt.Print("Now testing ", raspberryIP, " ... ")
		found, _ = testIP(raspberryIP)
		if found {
			break
		} else {
			fmt.Println("nope")
		}
	}

	if found {
		openbrowser(raspberryIP)
	} else {
		fmt.Println("Raspberry not found :(")
	}
}
