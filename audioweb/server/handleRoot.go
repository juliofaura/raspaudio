package server

import (
	"net/http"

	"github.com/juliofaura/webutil"
)

///////////////////////////////////////////////////
// Handle functions
///////////////////////////////////////////////////
func HandleRoot(w http.ResponseWriter, req *http.Request) {
	passdata := map[string]interface{}{
		"pagetitle": HEADER_PAGE_TITLE + " - log in",
		"alerts":    webutil.PopAlerts(w, req),
	}
	// session, err := webutil.Store.Get(req, webutil.SESSIONNAME)
	// if err != nil {
	// 	http.Error(w, err.Error(), http.StatusInternalServerError)
	// 	return
	// }
	templates.ExecuteTemplate(w, "login.html", passdata)
}
