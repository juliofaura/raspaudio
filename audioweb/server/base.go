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
	XMIN_INSTALLER         = "Xming-6-9-0-31-setup.exe"
	CONNECTOR              = "connector.exe"
	PING_QUESTION          = "Registering_jamulus_raspberry_from_abroad"
	SUCCESS_RESPONSE       = "Thanks very much"
	ERROR_RESPONSE         = "What???"
)

var (
	WEBPORT           string = "8050"
	HEADER_PAGE_TITLE string = "Raspberry audio instructions page"
)

var (
	SESSIONNAME      string
	SESSIONSTORENAME string
	SESSIONALERTS    string
)

var templates = template.Must(template.ParseFiles(
	WEB_PATH + "index.html",
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
	http.Handle("/", http.HandlerFunc(HandleIndex))
	http.Handle("/retrieve", http.HandlerFunc(HandleRetrieve))
	http.Handle("/ping", http.HandlerFunc(HandlePingService))
	http.Handle("/resources/", http.StripPrefix("/resources/", http.FileServer(http.Dir(WEB_PATH+"resources"))))
	//http.Handle("/local_resources/", http.StripPrefix("/local_resources/", http.FileServer(http.Dir("./local_resources"))))
	go func() {
		addr := flag.String("addr", ":"+WEBPORT, "http service address")
		err := http.ListenAndServe(*addr, context.ClearHandler(http.DefaultServeMux))
		if err != nil {
			log.Fatal("ListenAndServe:", err)
		}
	}()
}
