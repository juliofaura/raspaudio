package server

import (
	"errors"
	"net/http"

	"github.com/gorilla/sessions"
	"github.com/juliofaura/webutil"
)

func HandleLogin(w http.ResponseWriter, req *http.Request) {
	req.ParseForm()
	loginA, okl := req.Form["login"]
	passwordA, okp := req.Form["password"]
	if !okl || !okp {
		http.Error(w, errors.New("Form error").Error(), http.StatusInternalServerError)
		return
	}
	session, err := webutil.Store.Get(req, SESSIONNAME)
	if err != nil {
		http.Error(w, err.Error(), http.StatusInternalServerError)
		return
	}
	found := loginA[0] == ACCOUNT
	if !found {
		webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Login error")
		webutil.Reload(w, req, "/")
		return
	}
	if passwordA[0] != PASSWORD {
		webutil.PushAlert(w, req, webutil.ALERT_DANGER, "Login error")
		webutil.Reload(w, req, "/")
		return
	}
	session.Values["accountID"] = ACCOUNT
	session.Values["login"] = ACCOUNT
	session.Options = &sessions.Options{
		Path:     "/",
		MaxAge:   86400 * 1,
		HttpOnly: true,
	}
	session.Save(req, w)
	webutil.Reload(w, req, "/")
}

func HandleLogout(w http.ResponseWriter, req *http.Request) {
	session, err := webutil.Store.Get(req, webutil.SESSIONNAME)
	if err != nil {
		http.Error(w, err.Error(), http.StatusInternalServerError)
		return
	}
	for i := range session.Values {
		delete(session.Values, i)
	}
	session.Save(req, w)
	webutil.Reload(w, req, "/")
}
