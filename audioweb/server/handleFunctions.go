package server

import (
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
			webutil.PushAlert(w, req, webutil.ALERT_SUCCESS, "Download of Xming installer should have started")
			http.ServeFile(w, req, "files/Xming-6-9-0-31-setup.exe")
		case "connector":
			webutil.PushAlert(w, req, webutil.ALERT_SUCCESS, "Download of raspberry connector should have started")
			http.ServeFile(w, req, "files/connector.exe")
		default:
			webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Error!! unknown requested file")
		}
	}
	webutil.Reload(w, req, "/")
}
