
// tool3.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "afxwinappex.h"
#include "afxdialogex.h"
#include "tool3.h"
#include "MainFrm.h"



#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ctool3App




BEGIN_MESSAGE_MAP(Ctool3App, CWinApp)

END_MESSAGE_MAP()


// Ctool3App construction

Ctool3App::Ctool3App()
{
	// TODO: replace application ID string below with unique ID string; recommended
	// format for string is CompanyName.ProductName.SubProduct.VersionInformation
	SetAppID(_T("tool3.AppID.NoVersion"));

	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

// The one and only Ctool3App object

Ctool3App theApp;

DWORD WM_ret;
// Ctool3App initialization
CMainFrame* pFrame;
HINSTANCE h;
BOOL Ctool3App::InitInstance()
{
	h=this->m_hInstance;
	// InitCommonControlsEx() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Set this to include all the common control classes you want to use
	// in your application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();
	
	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);
	 WM_ret = RegisterWindowMessage(L"TaskbarButtonCreated");

	EnableTaskbarInteraction(FALSE);

	// AfxInitRichEdit2() is required to use RichEdit control	
	 AfxInitRichEdit2();
	  LoadLibrary(L"MSFTEDIT.DLL");
	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

;
	// To create the main window, this code creates a new frame window
	// object and then sets it as the application's main window object
	pFrame= new CMainFrame;
	if (!pFrame)
		return FALSE;
	m_pMainWnd = pFrame;
	WNDCLASSEX w;
	ZeroMemory(&w,sizeof(WNDCLASSEX));

	w.hbrBackground=(HBRUSH)(COLOR_WINDOW+1);
	w.lpszClassName=L"t";
	w.style=CS_OWNDC|CS_BYTEALIGNCLIENT|CS_BYTEALIGNWINDOW|CS_HREDRAW|CS_VREDRAW;
	w.hCursor=this->LoadStandardCursor(IDC_ARROW);
	w.lpfnWndProc=AfxWndProc;
	w.lpszMenuName=NULL;
	w.hInstance=this->m_hInstance;
	w.cbSize=sizeof(WNDCLASSEX);

	RegisterClassEx(&w);
	
	// create and load the frame with its resources
	pFrame->CreateEx( WS_EX_APPWINDOW,L"t",L"edw",WS_OVERLAPPEDWINDOW,CRect(20,0,477,575),NULL,0);
	// The one and only window has been initialized, so show and update it
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	// call DragAcceptFiles only if there's a suffix
	//  In an SDI app, this should occur after ProcessShellCommand
	return TRUE;
}

int Ctool3App::ExitInstance()
{

	delete pFrame;
	return CWinApp::ExitInstance();
}

// Ctool3App message handlers



// Ctool3App message handlers






