
// MainFrm.cpp : implementation of the CMainFrame class
//
 

#include "stdafx.h"
#include "tool3.h"
#include <Richedit.h>
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
extern VOID c(VOID *);

// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CWnd)
	ON_WM_CREATE()
	ON_BN_CLICKED(2133,tr)
	ON_BN_CLICKED(233,w)
	ON_BN_CLICKED(2233,uw)
	ON_BN_CLICKED(22,ef)
	ON_WM_DESTROY()
	ON_REGISTERED_MESSAGE(WM_ret, &CMainFrame::OnRet)   //that's a piece of class wizard production after "Add cutom message" with "registered message".
	// WM_ret stays undefined that moment so .
	ON_WM_CLOSE()
END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
}

CMainFrame::~CMainFrame()
{
}


// CMainFrame diagnostics

#ifdef _DEBUG



#endif //_DEBUG


// CMainFrame message handlers

class r:public CFolderPickerDialog
{
public:
	CString f;
	int last;

	r() : CFolderPickerDialog()
	{

	}
	void init() { f = m_szFileName; }
};
r *t;
HWND hc,hz;
CProgressCtrl *dc;
CProgressCtrl *t7;
CButton *bh;
CButton *q;
CButton *finA;
CButton *cmdos;
CStatic *b7;
ITaskbarList3 *bhr;
HANDLE cl;


DWORD CALLBACK E(DWORD_PTR dw, LPBYTE pb, LONG cb, LONG *pcb)
{
    std::wstringstream *fr = (std::wstringstream *)dw;
    fr->write((wchar_t *)pb, int(cb/2)); 
    *pcb = cb;
    return 0;
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	
	t7=	new CProgressCtrl();
	dc= new CProgressCtrl();
	cl=CreateEvent(NULL,1,0,NULL);
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	bh=new CButton();

	b7=new CStatic();
	q=new CButton();
	finA=new CButton();
	cmdos=new CButton();
	CBitmap wq[2];

	wq[0].LoadBitmap(IDB_BITMAP1);
	wq[1].LoadBitmap(IDB_BITMAP4);

	wchar_t w[740];
				ExpandEnvironmentStrings(L"%USERPROFILE%\\Documents\\fold.",w,740);
				FILE *xf;
				_wfopen_s(&xf,w,L"r+");		
				DWORD c = 0L;
			if(xf)  
			{
					fwscanf(xf,L"%[^\n]%*c",remmi);          //stuff from msdn. works with and w/o \n 
					t=new r();
					t->f=remmi;
					if(!(feof(xf)))
					{
						ZeroMemory(remmi,1218*2);
						fwscanf(xf,L"%[^\n]%*c",remmi);
					}
					else
					{							
						wcscpy_s(remmi,L"--block-sync-size 20 --db-sync-mode fastest:async:8750 --prep-blocks-threads 4");
						fwprintf(xf,L"\n%s",remmi);      // r+ shifts write pos when read.
					}
					fclose(xf);
			}
			else
			{
					c=WS_DISABLED;
					wcscpy_s(remmi,L"--block-sync-size 20 --db-sync-mode fastest:async:8750 --prep-blocks-threads 4");
					t=NULL;
			}
			


	bh->Create(L"start",BS_BITMAP|WS_CHILD|WS_VISIBLE|c,CRect(50,50,170,100),this,2133);
	bh->SetBitmap(wq[0]);
	q->Create(L"stop",BS_BITMAP|WS_CHILD|WS_VISIBLE|WS_DISABLED,CRect(50+170,50,170+170,100),this,233);
	q->SetBitmap(wq[1]);
	finA->Create(L"locate",BS_TEXT|WS_CHILD|WS_VISIBLE,CRect(0+280,20+292,59+280,48+292),this,2233);
	cmdos->Create(L"commandos",BS_TEXT|WS_CHILD|WS_VISIBLE|WS_DISABLED,CRect(0+350,20+292,97+350,48+292),this,22);

	dc->Create(WS_VISIBLE|WS_CHILD|PBS_SMOOTH,CRect(120,100+130,120+220,100+170),this,21);
	t7->Create(WS_VISIBLE|WS_CHILD|PBS_VERTICAL|PBS_SMOOTHREVERSE|PBS_SMOOTH,CRect(10,200,10+19,200+140),this,129);
	t7->SetRange(0,140);
	b7->Create(L"to go :",WS_CHILD|WS_VISIBLE|SS_WHITEFRAME|SS_SIMPLE,CRect(40,290,373,320),this);
	 hc=CreateWindowEx(WS_EX_NOPARENTNOTIFY, MSFTEDIT_CLASS,remmi, 
		ES_MULTILINE|ES_AUTOVSCROLL| WS_VISIBLE | WS_CHILD |WS_TABSTOP|WS_VSCROLL, 
        1, 350, 450, 201, 
		this->m_hWnd, NULL, h, NULL);
	HFONT newFont = CreateFont(22, 0, 0, 0,0 , FALSE, FALSE, FALSE, DEFAULT_CHARSET,
    OUT_TT_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_NATURAL_QUALITY,
    DEFAULT_PITCH | FF_DECORATIVE, L"Lucida Console");
	
	::PostMessage(hc,WM_SETFONT,(WPARAM)newFont,(LPARAM)0);
	hz=this->m_hWnd;
	::PostMessage(b7->m_hWnd,WM_SETFONT,(WPARAM)newFont,(LPARAM)0);
	return 0;
}
	HANDLE stdinRd, stdinWr, stdoutRd, stdoutWr;
int bren=5;
int cr,f,b,terminator;
PROCESS_INFORMATION pi;

 





CWinThread *rew;
int trigger;
int terminator2;

void CMainFrame::tr() //  bh->Create(L"start",BS_BITMAP|WS_CHILD|WS_VISIBLE|c,CRect(50,50,170,100),this,2133);
{   
	std::wstringstream fr;

	EDITSTREAM es;
	if(!trigger)
	{	
		ZeroMemory(&es,sizeof(es));
		es.dwCookie = (DWORD_PTR) &fr;
		es.pfnCallback = E;
		::SendMessage(hc, EM_STREAMOUT, SF_TEXT|SF_UNICODE, (LPARAM)&es);		
	}
	

	SECURITY_ATTRIBUTES sa={sizeof(SECURITY_ATTRIBUTES), NULL, true};    
			CreatePipe(&stdinRd, &stdinWr, &sa, 10000); 
            CreatePipe(&stdoutRd,&stdoutWr, &sa,500000);
			if(pi.hProcess) CloseHandle(pi.hProcess); 
			STARTUPINFO si;
			ZeroMemory(&si,sizeof(si));
           
			si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
            si.wShowWindow = SW_HIDE;
            si.hStdOutput = stdoutWr;
            si.hStdError = stdoutWr;         
            si.hStdInput = stdinRd;
			std::wstring w;
			if(!trigger) 
			{	
				if(!iswspace((wchar_t )fr.str()[0])) { ZeroMemory(remmi,318*2);
w=L' ' + fr.str(); w.copy(remmi,747,0);}
				else
				{ZeroMemory(remmi,1218*2);
					
					fr.read(remmi,747);
				}				
				trigger++;
			}
	
			

			
			int h=CreateProcess(t->f + L"\\monerod.exe",remmi, NULL, NULL, TRUE, CREATE_NEW_PROCESS_GROUP, NULL, t->f, &si, &pi);        
			if(!h) 
			{

				MessageBox(L"Bad start,check location");
				return;
			}
			bren=0;
			rew=AfxBeginThread((AFX_THREADPROC)c,NULL);
}

void CMainFrame::w()			   // q->Create(L"stop",BS_BITMAP|WS_CHILD|WS_VISIBLE|WS_DISABLED,CRect(50+170,50,170+170,100),this,233);
{
	b=1;
	char k[100];
	strcpy(k,"exit\n");
    DWORD numberofbyteswritten;
	WriteFile(stdinWr, k, 5, &numberofbyteswritten, NULL);
}




void CMainFrame::uw()				// finA->Create(L"locate",BS_TEXT|WS_CHILD|WS_VISIBLE,CRect(0+280,20+292,59+280,48+292),this,2233);
{
	if(!t) t=new r();
	int c= t->DoModal();
	

	wchar_t w[740];
	ExpandEnvironmentStrings(L"%USERPROFILE%\\Documents\\fold.",w,730);
	FILE *xf;

	if(c==IDOK)
	{
		xf=_wfopen(w,L"w+");
		t->init();
		fwprintf(xf,L"%s",t->f);
		fwprintf(xf,L"\n%s",remmi);
		fclose(xf);
		bh->EnableWindow();	
	}
	else if(t->f.IsEmpty()) { delete t; t=NULL; }
}


void CMainFrame::OnDestroy()
{
	CWnd::OnDestroy();
	if(t) delete t;
	delete bh;
	delete q;
	delete dc;
	delete finA;
	delete cmdos;
	delete t7;
	delete b7;
//	delete rew;

	// TODO: Add your message handler code here
}



VOID hammer(VOID *)
{	
	CoInitializeEx(NULL,COINIT_MULTITHREADED); //used only by extra thread for now
	CoCreateInstance(CLSID_TaskbarList,NULL,CLSCTX_INPROC_SERVER,IID_ITaskbarList3,(LPVOID*)&bhr); //no inter-process here.pointer grabs smth finally  
	bhr->HrInit();								//not sure
	WaitForSingleObject(cl,INFINITE);
	bhr->Release();
	bhr=NULL;					//  recommendation about to deal with COM
	CoUninitialize();
}

afx_msg LRESULT CMainFrame::OnRet(WPARAM wParam, LPARAM lParam) //Win7 progress bar over a taskbar's bay of this app. WM_ret finished up here.  
{
	 AfxBeginThread((AFX_THREADPROC)hammer,NULL);	
	return 0;
}


void CMainFrame::OnClose()
{
		FILE *xf;		
		wchar_t w[840],ferrum[324];
	if(terminator2)
	{
		DWORD c=WaitForSingleObject(pi.hProcess,140);
		if(c!= WAIT_TIMEOUT) 
		{
			SetEvent(cl);
			if(t)
			{
				ExpandEnvironmentStrings(L"%USERPROFILE%\\Documents\\fold.",w,930);
				xf=_wfopen(w,L"w+");
				fwprintf(xf,L"%s",t->f);
				if(remmi[0]==L' ')fwprintf(xf,L"\n%s",&remmi[1]);
				else fwprintf(xf,L"\n%s",remmi);
				fclose(xf); 			
			}

		CWnd::OnClose();

		}

	}
	terminator2++;

	if((!b)&&(bren))	
	{
		SetEvent(cl);


			if(t)
			{
				ExpandEnvironmentStrings(L"%USERPROFILE%\\Documents\\fold.",w,1310);
				xf=_wfopen(w,L"w+");
				fwprintf(xf,L"%s",t->f);
				if(remmi[0]==L' ')fwprintf(xf,L"\n%s",&remmi[1]);
				else fwprintf(xf,L"\n%s",remmi);
				fclose(xf); 			
			}
		CWnd::OnClose();
	}
	else
	{
		terminator =1;
		if(!b) this->w();
	}


}

void CMainFrame::ef()
{
	SETTEXTEX fw;
		fw.flags=4;
	fw.codepage=1200;			
	::SendMessage(hc,EM_SETTEXTEX,(WPARAM)&fw,(LPARAM)remmi);
	trigger=5-bren;
}
