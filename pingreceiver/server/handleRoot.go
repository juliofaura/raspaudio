package server

import (
	"net/http"

	"github.com/juliofaura/raspaudio/netUtils"
	"github.com/juliofaura/webutil"
)

///////////////////////////////////////////////////
// Handle functions
///////////////////////////////////////////////////
func HandleRoot(w http.ResponseWriter, req *http.Request) {
	passdata := map[string]interface{}{
		"pagetitle": "Hello from the raspberry",
		"myIP":      netUtils.GetOutboundIP(),
		"IPs":       netUtils.ResolveHostIP(),
		"from":      netUtils.ReadUserIP(req),
		"alerts":    webutil.PopAlerts(w, req),
	}
	templates.ExecuteTemplate(w, "index.html", passdata)
}
