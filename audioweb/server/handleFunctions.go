package server

import (
	"net/http"

	"github.com/juliofaura/webutil"
)

const (
	XMIN_INSTALLER = "Xming-6-9-0-31-setup.exe"
	CONNECTOR      = "connector.exe"
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
