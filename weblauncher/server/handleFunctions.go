package server

import (
	"encoding/json"
	"fmt"
	"log"
	"net/http"
	"os"
	"os/exec"

	"github.com/juliofaura/raspaudio/netUtils"
	"github.com/juliofaura/webutil"
)

type WSmessage struct {
	Success bool
	Data    interface{}
}

///////////////////////////////////////////////////
// Handle functions
///////////////////////////////////////////////////

func HandleRoot(w http.ResponseWriter, req *http.Request) {
	passdata := map[string]interface{}{
		"pagetitle": "Hello from the raspberry",
		"myIP":      netUtils.GetOutboundIP(),
		"hostname":  HOSTNAME,
		"IPs":       netUtils.ResolveHostIP(),
		"from":      netUtils.ReadUserIP(req),
		"alerts":    webutil.PopAlerts(w, req),
	}
	templates.ExecuteTemplate(w, "index.html", passdata)
}

func HandleLaunchQjackctl(w http.ResponseWriter, req *http.Request) {
	req.ParseForm()
	ip, ok := req.Form["toIP"]
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

func HandleLaunchAlsamixer(w http.ResponseWriter, req *http.Request) {
	req.ParseForm()
	ip, ok := req.Form["toIP"]
	if !ok {
		webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Error!! bad call to launch alsamixer")
	} else {
		path, err := os.Getwd()
		if err != nil {
			webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Error!! can't find the current path")
			log.Println(err)
		}
		cmd := exec.Command(path+"/launchalsamixer", ip[0]+":0")
		err = cmd.Run()
		if err != nil {
			webutil.PushAlert(w, req, webutil.ALERT_DANGER, fmt.Sprint(err)+"\nCommand was: "+path+"/launchalsamixer "+ip[0]+":0")
		} else {
			webutil.PushAlert(w, req, webutil.ALERT_SUCCESS, "Alsamixer successfully launched (hopefully)")
		}
	}
	webutil.Reload(w, req, "/")
}

func HandleLaunchAlsamixergui(w http.ResponseWriter, req *http.Request) {
	req.ParseForm()
	ip, ok := req.Form["toIP"]
	if !ok {
		webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Error!! bad call to launch alsamixergui")
	} else {
		path, err := os.Getwd()
		if err != nil {
			webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Error!! can't find the current path")
			log.Println(err)
		}
		cmd := exec.Command(path+"/launchalsamixergui", ip[0]+":0")
		err = cmd.Run()
		if err != nil {
			webutil.PushAlert(w, req, webutil.ALERT_DANGER, fmt.Sprint(err)+"\nCommand was: "+path+"/launchalsamixergui "+ip[0]+":0")
		} else {
			webutil.PushAlert(w, req, webutil.ALERT_SUCCESS, "Alsamixergui successfully launched (hopefully)")
		}
	}
	webutil.Reload(w, req, "/")
}

func HandlePingService(w http.ResponseWriter, req *http.Request) {
	req.ParseForm()
	token, ok := req.Form["question"]
	if !ok || token[0] != PING_QUESTION {
		b, err := json.Marshal(WSmessage{false, ERROR_RESPONSE})
		if err != nil {
			log.Printf("Internal error when marshaling a json response [%v]\n", err)
			return
		}
		fmt.Fprint(w, string(b))
		return
	}
	b, err := json.Marshal(WSmessage{true, SUCCESS_RESPONSE})
	if err != nil {
		log.Printf("Internal error when marshaling a json response [%v]\n", err)
		return
	}
	fmt.Fprint(w, string(b))
	return
}
