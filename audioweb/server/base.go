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
	HEADER_PAGE_TITLE string = "Audio instructions page"
)

var (
	SESSIONNAME      string
	SESSIONSTORENAME string
	SESSIONALERTS    string
)

var templates = template.Must(template.ParseFiles(
	WEB_PATH+"index.html",
	WEB_PATH+"login.html",
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
	// http.Handle("/login", http.HandlerFunc(HandleLogin))
	// http.Handle("/index", http.HandlerFunc(HandleIndex))
	// http.Handle("/retrieve_password", http.HandlerFunc(HandleRetrievePassword))
	// http.Handle("/change_password", http.HandlerFunc(HandleChangePassword))
	// http.Handle("/theme", http.HandlerFunc(HandleTheme))
	// http.Handle("/logout", http.HandlerFunc(HandleLogout))
	// http.Handle("/sendtransfer", http.HandlerFunc(HandleSendTransfer))
	// http.Handle("/services/", http.HandlerFunc(HandleServices))
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

func HandleTheme(w http.ResponseWriter, req *http.Request) {
	templates.ExecuteTemplate(w, "theme.html", "")
}

func logged(w http.ResponseWriter, req *http.Request) (ACCOUNT, result bool, err error) {
	session, err := webutil.Store.Get(req, webutil.SESSIONNAME)
	if err != nil {
		http.Error(w, err.Error(), http.StatusInternalServerError)
		return
	}
	_, result = session.Values["login"]
	if !result {
		return
	}
	accountID, ok := session.Values["accountID"]
	if !ok {
		HandleLogout(w, req)
	}
	found := accountID == "user"
	// found, thisErr := db.ReadEntry(data.DBNAME, data.DBTABLEACCOUNTS, "accountID", accountID, &account)
	// if thisErr != nil {
	// 	err = errors.New(fmt.Sprintf("DB error reading current account balance [%v]", err))
	// 	return
	// }
	if !found {
		result = false
		HandleLogout(w, req)
	}
	return
}
