
// MainFrm.cpp : implementation of the CMainFrame class
//


#include "stdafx.h"
#include "tool3.h"
#include <Richedit.h>
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CWnd)
	ON_WM_CREATE()
	ON_BN_CLICKED(2133,tr)
	ON_BN_CLICKED(233,w)
	ON_BN_CLICKED(2233,uw)
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
	r() : CFolderPickerDialog()
	{
	}
	CString f;
	void init() {f = m_szFileName; }
};
r *t;
HWND hc,hz;
CProgressCtrl *dc;
CButton *bh;
CButton *q;
CButton *finA;
ITaskbarList3 *bhr;
int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	
	
	dc= new CProgressCtrl();
	
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO:  Add your specialized creation code here
	bh=new CButton();

	q=new CButton();
	finA=new CButton();
	CBitmap wq[2];
	wq[0].LoadBitmapW(IDB_BITMAP1);
	wq[1].LoadBitmapW(IDB_BITMAP4);
	wchar_t w[140];
				std::wifstream fors;
				ExpandEnvironmentStrings(L"%USERPROFILE%\\Documents\\fold.",w,140);
				fors.open(w,std::ios_base::in);
				DWORD c = 0L;
			if(!fors.is_open())  c=WS_DISABLED;
	

	bh->Create(L"start",BS_BITMAP|WS_CHILD|WS_VISIBLE|c,CRect(50,50,170,100),this,2133);
	bh->SetBitmap(wq[0]);
	q->Create(L"stop",BS_BITMAP|WS_CHILD|WS_VISIBLE|WS_DISABLED,CRect(50+170,50,170+170,100),this,233);
	q->SetBitmap(wq[1]);
	finA->Create(L"locate",BS_TEXT|WS_CHILD|WS_VISIBLE,CRect(0+300,20+300,59+300,40+300),this,2233);
	dc->Create(WS_VISIBLE|WS_CHILD|PBS_SMOOTH|PBS_PRESSED,CRect(50,50+100,170+100,100+100),this,21);
	hc=CreateWindowEx(0, MSFTEDIT_CLASS, NULL,
		ES_MULTILINE|ES_AUTOVSCROLL|ES_READONLY|ES_NOOLEDRAGDROP|ES_SUNKEN | WS_VISIBLE | WS_CHILD | WS_VSCROLL|WS_TABSTOP, 
        0, 350, 450, 200, 
		this->m_hWnd, NULL, h, NULL);
	HFONT newFont = CreateFont(22, 0, 0, 0,0 , FALSE, FALSE, FALSE, DEFAULT_CHARSET,
    OUT_TT_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_NATURAL_QUALITY,
    DEFAULT_PITCH | FF_DECORATIVE, L"Lucida Console");
	::PostMessage(hc,WM_SETFONT,(WPARAM)newFont,(LPARAM)0);
	hz=this->m_hWnd;
	return 0;
}
	HANDLE stdinRd, stdinWr, stdoutRd, stdoutWr;

int cr,f,b,terminator,p[3];
PROCESS_INFORMATION pi;
VOID c(VOID *)
{			
			bhr->SetProgressState(hz,TBPF_NORMAL);
			dc->SetState(PBST_NORMAL);
			bh->EnableWindow(0);
			q->EnableWindow();
			char k[100];
			strcpy(k,"t");
			DWORD numberofbyteswritten;
            DWORD dwRead;
			DWORD totalbytesavailable;
			char output_cmd[10001];
			int h,c,ferrum=0,w=0,monte=0,tm=500;
			CString t,bear;
            while(1)
            {
				PeekNamedPipe(stdoutRd, NULL, 0, NULL, &totalbytesavailable, 0);

			    if(totalbytesavailable)
                {   
					w=min(w,1000);
                    ReadFile(stdoutRd, output_cmd, min(10000,totalbytesavailable), &dwRead, NULL);
                    h = min(10000,totalbytesavailable);
                    output_cmd[h]='\0';
					
					t=output_cmd;
					bear=bear + t;
					if(w++ > 34) bear=bear.Right(monte);
					else monte = monte + h;
					SetWindowText(hc,bear);
					PostMessage(hc, WM_VSCROLL, SB_BOTTOM, 0);

					c=t.Find(L"Synced");
					if(c != -1)  
						{
							tm=1100;
							t=t.Right(h-c-7);
							t.Truncate(h-c-11);
							swscanf((LPCWSTR)t,L"%d/%d",&p[1],&p[2]);
							dc->SetPos(100*p[1]/p[2]);
							bhr->SetProgressValue(hz,p[1],p[2]);
						}
					
				}
					                   
				if(b&&(output_cmd[h-3]=='d'))  { WriteFile(stdinWr, k, 1, &numberofbyteswritten, NULL); ferrum=1; tm=500;}
				if(ferrum&&(output_cmd[h-3]=='y')) 
				{ 
					
					dc->SetState(PBST_PAUSED);
					bhr->SetProgressState(hz,TBPF_PAUSED);
					q->EnableWindow(0);
					WaitForSingleObject(pi.hProcess,INFINITE);
					 b=0;
					bh->EnableWindow();
					if(terminator) PostMessage(hz,WM_CLOSE,NULL,NULL);
					break; 
				}
                Sleep(tm);
            }
}

CWinThread *rew;
void CMainFrame::tr()
{   
	
	SECURITY_ATTRIBUTES sa={sizeof(SECURITY_ATTRIBUTES), NULL, true};    
			CreatePipe(&stdinRd, &stdinWr, &sa, 10000); 
            CreatePipe(&stdoutRd,&stdoutWr, &sa, 10000);
          
			STARTUPINFO si;
			ZeroMemory(&si,sizeof(si));
           
			si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
            si.wShowWindow = SW_HIDE;
            si.hStdOutput = stdoutWr;
            si.hStdError = stdoutWr;         
            si.hStdInput = stdinRd; 
				
			wchar_t w[140],ferrum[198];
			std::wifstream f;

			if(!t) 
			{
				ExpandEnvironmentStrings(L"%USERPROFILE%\\Documents\\fold.",w,140);
				f.open(w,std::ios_base::in);
				t=new r();
				f >> ferrum;
				t->f= ferrum;
			}
			int h=CreateProcess(t->f + L"\\monerod.exe", L" --block-sync-size 240 --db-sync-mode fastest:async:450", NULL, NULL, TRUE, CREATE_NEW_PROCESS_GROUP, NULL, t->f, &si, &pi);        
			if(!h) 
			{

				MessageBox(L"Bad start,check location");
				return;
			}

			rew= AfxBeginThread((AFX_THREADPROC)c,NULL);
}

void CMainFrame::w()
{
	b=1;
	char k[100];
	strcpy(k,"exit\n");
    DWORD numberofbyteswritten;
	WriteFile(stdinWr, k, 5, &numberofbyteswritten, NULL);
}




void CMainFrame::uw()
{
	
	t=new r();
	int c= t->DoModal();
	t->init();

	wchar_t w[140];
	ExpandEnvironmentStrings(L"%USERPROFILE%\\Documents\\fold.",w,130);
	std::wofstream f;

	if(c==IDOK)
	{
		f.open(w,std::ios_base::out);
		f<<(LPCWSTR)t->f;
		f.close();
		f.flush();
		bh->EnableWindow();	
	}
	else {delete t; t=NULL;}
}


void CMainFrame::OnDestroy()
{
	CWnd::OnDestroy();
	delete t;
	delete bh;
	delete q;
	delete dc;
	delete finA;
//	delete rew;
	bhr->Release();
	bhr=NULL;
	CoUninitialize();

	// TODO: Add your message handler code here
}




afx_msg LRESULT CMainFrame::OnRet(WPARAM wParam, LPARAM lParam) //Win7 progress bar over a taskbar's bay of this app. WM_ret finished up here.  
{
	CoInitializeEx(NULL,COINIT_MULTITHREADED); //used only by extra thread for now
	CoCreateInstance(CLSID_TaskbarList,NULL,CLSCTX_INPROC_SERVER,IID_ITaskbarList3,(LPVOID*)&bhr); //no inter-process here.pointer grabs smth finally  
	bhr->HrInit(); 
	return 0;
}


void CMainFrame::OnClose()
{
	// TODO: Add your message handler code here and/or call default

	//if(!rew) bhr->SetProgressValue(hz,70,100);
	if((!b)&&(!q->IsWindowEnabled()))	CWnd::OnClose();
	else
	{
		terminator =1;
		if(!b) this->w();
	}
}
