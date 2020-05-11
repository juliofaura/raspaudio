// Webpage management for Casheth

package server

import (
	//"encoding/gob"

	"flag"
	"html/template"
	"log"
	"net/http"

	"github.com/gorilla/context"
	"github.com/juliofaura/webutil"
)

///////////////////////////////////////////////////
// Constants (some in fact defined as global variables) and types
///////////////////////////////////////////////////

const (
	WEB_PATH               = "./web/"
	HEADER_TEMPLATE_FILE   = "header.html"
	ERROR_TEMPLATE_FILE    = "error.html"
	BACKGROUNDPICSDIR      = "(not used)"
	SESSIONNAMEPREFIX      = "mysession"
	SESSIONSTORENAMEPREFIX = "mycookiestore2345234xjhkh"
	SESSIONALERTSPREFIX    = "myPendingAlerts"
	ACCOUNT                = "user"
	PASSWORD               = "1234"
)

var (
	WEBPORT           string = "8050"
	HEADER_PAGE_TITLE string = "Raspberry ping responder"
)

var (
	SESSIONNAME      string
	SESSIONSTORENAME string
	SESSIONALERTS    string
)

var templates = template.Must(template.ParseFiles(
	WEB_PATH+"index.html",
	WEB_PATH+"theme.html",
))

var consoleUsers = map[string]webutil.ConsoleUserT{
	//TO DO: put this in the DB or at least into a file
	"admin": {"admin", "1234", true},
}

func StartWeb() {

	SESSIONNAME = SESSIONNAMEPREFIX + WEBPORT
	SESSIONSTORENAME = SESSIONSTORENAMEPREFIX + WEBPORT
	SESSIONALERTS = SESSIONALERTSPREFIX + WEBPORT

	flag.Parse()

	webutil.Init(
		WEB_PATH,
		HEADER_PAGE_TITLE,
		HEADER_TEMPLATE_FILE,
		ERROR_TEMPLATE_FILE,
		BACKGROUNDPICSDIR,
		// data.PICSPREFIX,
		SESSIONNAME,
		SESSIONSTORENAME,
		SESSIONALERTS,
		consoleUsers,
	)
	http.Handle("/", http.HandlerFunc(HandleRoot))
	http.Handle("/launchQjackctl", http.HandlerFunc(HandleLaunchQjackctl))
	http.Handle("/launchJamulus", http.HandlerFunc(HandleLaunchJamulus))
	http.Handle("/ping", http.HandlerFunc(HandlePingService))
	http.Handle("/resources/", http.StripPrefix("/resources/", http.FileServer(http.Dir(WEB_PATH+"resources"))))
	go func() {
		addr := flag.String("addr", ":"+WEBPORT, "http service address")
		err := http.ListenAndServe(*addr, context.ClearHandler(http.DefaultServeMux))
		if err != nil {
			log.Fatal("ListenAndServe:", err)
		}
	}()
}

func HandleTheme(w http.ResponseWriter, req *http.Request) {
	templates.ExecuteTemplate(w, "theme.html", "")
}
