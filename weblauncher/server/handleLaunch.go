package server

import (
	"encoding/json"
	"fmt"
	"log"
	"net/http"
	"os"
	"os/exec"

	"github.com/juliofaura/webutil"
)

const (
	QUESTION       = "Are_you_the_raspberry"
	PING_RESPONSE  = "Here I am"
	ERROR_RESPONSE = "Are you drunk?"
)

type WSmessage struct {
	Success bool
	Data    interface{}
}

///////////////////////////////////////////////////
// Handle functions
///////////////////////////////////////////////////
func HandleLaunchQjackctl(w http.ResponseWriter, req *http.Request) {
	req.ParseForm()
	ip, ok := req.Form["toIP"]
	fmt.Println("ip is", ip)
	if !ok {
		webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Error!! bad call to launch Qjackctl")
	} else {
		path, err := os.Getwd()
		if err != nil {
			webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Error!! can't find the current path")
			log.Println(err)
		}
		cmd := exec.Command(path+"/launchqjackctl", ip[0]+":0")
		err = cmd.Run()
		if err != nil {
			webutil.PushAlert(w, req, webutil.ALERT_DANGER, fmt.Sprint(err)+"\nCommand was: "+path+"/launchqjackctl "+ip[0]+":0")
		} else {
			webutil.PushAlert(w, req, webutil.ALERT_SUCCESS, "qjackctl successfully launched (hopefully)")
		}
	}
	webutil.Reload(w, req, "/")
}

func HandleLaunchJamulus(w http.ResponseWriter, req *http.Request) {
	req.ParseForm()
	ip, ok := req.Form["toIP"]
	fmt.Println("ip is", ip)
	if !ok {
		webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Error!! bad call to launch Jamulus")
	} else {
		path, err := os.Getwd()
		if err != nil {
			webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Error!! can't find the current path")
			log.Println(err)
		}
		cmd := exec.Command(path+"/launchjamulus", ip[0]+":0")
		err = cmd.Run()
		if err != nil {
			webutil.PushAlert(w, req, webutil.ALERT_DANGER, fmt.Sprint(err)+"\nCommand was: "+path+"/launchjamulus "+ip[0]+":0")
		} else {
			webutil.PushAlert(w, req, webutil.ALERT_SUCCESS, "Jamulus successfully launched (hopefully)")
		}
	}
	webutil.Reload(w, req, "/")
}

func HandlePingService(w http.ResponseWriter, req *http.Request) {
	req.ParseForm()
	token, ok := req.Form["question"]
	if !ok || token[0] != QUESTION {
		b, err := json.Marshal(WSmessage{false, ERROR_RESPONSE})
		if err != nil {
			log.Printf("Internal error when marshaling a json response [%v]\n", err)
			return
		}
		fmt.Fprint(w, string(b))
		return
	}
	b, err := json.Marshal(WSmessage{true, PING_RESPONSE})
	if err != nil {
		log.Printf("Internal error when marshaling a json response [%v]\n", err)
		return
	}
	fmt.Fprint(w, string(b))
	return
}
