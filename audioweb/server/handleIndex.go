package server

import (
	"net/http"

	"github.com/juliofaura/webutil"
)

func HandleIndex(w http.ResponseWriter, req *http.Request) {
	account, amIlogged, err := logged(w, req)
	if err != nil {
		webutil.ShowErrorf(w, req, "Internal error [%v]", err)
		return
	}
	if !amIlogged {
		webutil.Reload(w, req, "/")
		return
	}

	passdata := map[string]interface{}{
		"account": account,
		"message": "Hello",
	}
	webutil.PlaceHeader(w, req)
	templates.ExecuteTemplate(w, "index.html", passdata)
}
