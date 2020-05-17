package server

import (
	"encoding/json"
	"fmt"
	"log"
	"net/http"

	"github.com/juliofaura/webutil"
)

func HandleIndex(w http.ResponseWriter, req *http.Request) {
	passdata := map[string]interface{}{
		"pagetitle": HEADER_PAGE_TITLE + " - log in",
		"alerts":    webutil.PopAlerts(w, req),
	}
	templates.ExecuteTemplate(w, "index.html", passdata)
}

func HandleRetrieve(w http.ResponseWriter, req *http.Request) {
	req.ParseForm()
	file, ok := req.Form["file"]
	if !ok {
		webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Error!! bad call to retrieve")
	} else {
		switch file[0] {
		case "xming":
			w.Header().Set("Content-Disposition", "attachment; filename="+XMIN_INSTALLER)
			w.Header().Set("Content-Type", req.Header.Get("Content-Type"))
			// webutil.PushAlert(w, req, webutil.ALERT_SUCCESS, "Download of Xming installer should have started")
			http.ServeFile(w, req, "files/"+XMIN_INSTALLER)
			return
		case "connector":
			w.Header().Set("Content-Disposition", "attachment; filename="+CONNECTOR)
			w.Header().Set("Content-Type", req.Header.Get("Content-Type"))
			// webutil.PushAlert(w, req, webutil.ALERT_SUCCESS, "Download of raspberry connector should have started")
			http.ServeFile(w, req, "files/"+CONNECTOR)
			return
		default:
			webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Error!! unknown requested file")
		}
	}
	webutil.Reload(w, req, "/")
}

func HandlePingService(w http.ResponseWriter, req *http.Request) {
	req.ParseForm()
	question, ok := req.Form["question"]
	if !ok || question[0] != PING_QUESTION {
		log.Println("Wrong ping request from", req.RemoteAddr, "(bad question)")
		resp, _ := json.Marshal(ERROR_RESPONSE)
		fmt.Fprint(w, string(resp))
		return
	}
	data, ok := req.Form["data"]
	if !ok {
		log.Println("Wrong ping request from", req.RemoteAddr, "(no data)")
		resp, _ := json.Marshal(ERROR_RESPONSE)
		fmt.Fprint(w, string(resp))
		return
	}
	log.Println("Ping request received from", req.RemoteAddr, ", data is", data[0])
	resp, _ := json.Marshal(SUCCESS_RESPONSE)
	fmt.Fprint(w, string(resp))
}
