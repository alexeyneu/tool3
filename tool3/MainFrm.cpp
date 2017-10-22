
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


	q=new CButton();
	finA=new CButton();
	cmdos=new CButton();
	CBitmap wq[2];
	wq[0].LoadBitmapW(IDB_BITMAP1);
	wq[1].LoadBitmapW(IDB_BITMAP4);
	wchar_t w[140];
				ExpandEnvironmentStrings(L"%USERPROFILE%\\Documents\\fold.",w,140);
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
						ZeroMemory(remmi,318*2);
						fwscanf(xf,L"%[^\n]%*c",remmi);
					}
					else
					{							
						wcscpy_s(remmi,L"--block-sync-size 4 --db-sync-mode fastest:sync:8750");
						fwprintf(xf,L"\n%s",remmi);      // r+ shifts write pos when read.
					}
					fclose(xf);
			}
			else
			{
					c=WS_DISABLED;
					wcscpy_s(remmi,L"--block-sync-size 4 --db-sync-mode fastest:sync:8750");
					t=NULL;
			}
			


	bh->Create(L"start",BS_BITMAP|WS_CHILD|WS_VISIBLE|c,CRect(50,50,170,100),this,2133);
	bh->SetBitmap(wq[0]);
	q->Create(L"stop",BS_BITMAP|WS_CHILD|WS_VISIBLE|WS_DISABLED,CRect(50+170,50,170+170,100),this,233);
	q->SetBitmap(wq[1]);
	finA->Create(L"locate",BS_TEXT|WS_CHILD|WS_VISIBLE,CRect(0+280,20+292,59+280,48+292),this,2233);
	cmdos->Create(L"commandos",BS_TEXT|WS_CHILD|WS_VISIBLE|WS_DISABLED,CRect(0+350,20+292,97+350,48+292),this,22);

	dc->Create(WS_VISIBLE|WS_CHILD|PBS_SMOOTH,CRect(120,100+130,120+220,100+170),this,21);
	t7->Create(WS_VISIBLE|WS_CHILD|PBS_VERTICAL|PBS_SMOOTHREVERSE|PBS_SMOOTH,CRect(10,200,10+19,200+140),this,29);
	t7->SetState(PBST_ERROR);
	t7->SetRange(0,140);
	hc=CreateWindowEx(WS_EX_NOPARENTNOTIFY, MSFTEDIT_CLASS,remmi, 
		ES_MULTILINE|ES_AUTOVSCROLL|ES_NOOLEDRAGDROP| WS_VISIBLE | WS_CHILD |WS_TABSTOP|WS_VSCROLL, 
        1, 350, 450, 201, 
		this->m_hWnd, NULL, h, NULL);
	HFONT newFont = CreateFont(22, 0, 0, 0,0 , FALSE, FALSE, FALSE, DEFAULT_CHARSET,
    OUT_TT_PRECIS, CLIP_DEFAULT_PRECIS, CLEARTYPE_NATURAL_QUALITY,
    DEFAULT_PITCH | FF_DECORATIVE, L"Lucida Console");
	::PostMessage(hc,WM_SETFONT,(WPARAM)newFont,(LPARAM)0);
	hz=this->m_hWnd;
	return 0;
}
	HANDLE stdinRd, stdinWr, stdoutRd, stdoutWr;
int bren=5;
int cr,f,b,terminator;
PROCESS_INFORMATION pi;

struct triggerblock
{
	long long b;
	long long t;
	tm c;
	tm p;
	int block[3];
	int ptrigger;
	float q;
	CStringA X7,X8;
	float outofthis;
	int tb,tp;
	float x;
};



VOID c(VOID *)
{			
	triggerblock z={};
			int p[3];
			ZeroMemory(p,sizeof(p));
			bhr->SetProgressState(hz,TBPF_NORMAL);
			dc->SetState(PBST_NORMAL);
			bh->EnableWindow(0);
			q->EnableWindow();
			char k[100];
			strcpy(k,"t");
			DWORD numberofbyteswritten;
            DWORD dwRead;
			DWORD totalbytesavailable;
			char output_cmd[400001];
			int h,c,ferrum=0,tm=400;
			BYTE w=0;
			CStringA t,bear;
			bear.Empty();
			SETTEXTEX fw;
			fw.flags=4;
			fw.codepage=CP_THREAD_ACP;
			int monte=0;
			char reserve;
			SetThreadExecutionState(ES_CONTINUOUS|ES_SYSTEM_REQUIRED);
            while(1)
            {
				PeekNamedPipe(stdoutRd, NULL, 0, NULL, &totalbytesavailable, 0);

			if(totalbytesavailable)
            {   
                    ReadFile(stdoutRd, output_cmd, min(400000,totalbytesavailable), &dwRead, NULL);
                    h = min(400000,totalbytesavailable);
                    output_cmd[h]='\0';
					t=output_cmd;
					if(monte) bear.SetAt(monte-2,reserve);			
									else
							{
								sscanf_s(t.Left(19),"%d-%d-%d %d:%d:%d", &z.c.tm_year ,&z.c.tm_mon, &z.c.tm_mday , &z.c.tm_hour, &z.c.tm_min ,&z.c.tm_sec);
								z.c.tm_year-=1900;
								z.t=_mktime64(&z.c);
							}

					monte=monte+h;
					bear=bear + t;
					if(w++ > 13) {bear=bear.Right(monte=min(monte,3504));w=0;}
					reserve=bear[monte-2];
					bear.SetAt(monte-2,'\0');
					SendMessage(hc,EM_SETTEXTEX,(WPARAM)&fw,(LPARAM)(LPCSTR)bear);
					PostMessage(hc, WM_VSCROLL, SB_BOTTOM, 0);
					

					c=t.Find("Synced");
					if(c != -1)  
						{
							
							tm=2940;
							if(z.tb==2)
							{
								sscanf_s(t.Left(19),"%d-%d-%d %d:%d:%d", &z.p.tm_year ,&z.p.tm_mon, &z.p.tm_mday , &z.p.tm_hour, &z.p.tm_min ,&z.p.tm_sec);
								z.p.tm_year-=1900;
								z.b=_mktime64(&z.p);
							}


							t=t.Right(h-c-7);
							t.Truncate(h-c-11);
							sscanf(t,"%d/%d",&p[1],&p[2]);
							dc->SetPos(100*p[1]/p[2]);
							bhr->SetProgressValue(hz,p[1],p[2]);
							if(!(z.ptrigger)) { z.block[1]=p[1]; z.ptrigger=-8; z.tb++;}
							if(z.tb==2)
							{
								z.block[2]=p[1];
								z.q=60.0*((z.block[2] - z.block[1]))/(z.b - z.t);
								if(z.tp==0) { z.x= 58.0*z.q; z.tp++; }
								t7->SetPos(140*z.q/z.x);
							}
							else z.tb=2;
				}
					
				
					                   
				if(b&&(output_cmd[h-3]=='d'))  { WriteFile(stdinWr, k, 1, &numberofbyteswritten, NULL); ferrum=1; tm=700;} 
// you'll never know.   https://monero.stackexchange.com/questions/6161/exit-command-pushed-to-pipelined-monerod
				
				if(ferrum&&(output_cmd[h-3]=='y')) 
				{ 
					

					sscanf(t.Left(19),"%d-%d-%d %d:%d:%d", &z.p.tm_year ,&z.p.tm_mon, &z.p.tm_mday , &z.p.tm_hour, &z.p.tm_min ,&z.p.tm_sec);
						z.p.tm_year-=1900;
						z.b=_mktime64(&z.p);
						z.block[2]=p[1];
						z.q=60.0*((z.block[2] - z.block[1]))/(z.b - z.t);
						z.X7.Format(" %.2f block/m",z.q);
						z.outofthis=(p[2] - z.block[2])/(z.q*1440);
						if(z.q) z.X8.Format("\\qr\\ri800\\fs30 days to go %.1f \\par\\ri0\\fs33\n",z.outofthis);

					dc->SetState(PBST_PAUSED);
					bhr->SetProgressState(hz,TBPF_PAUSED);
					q->EnableWindow(0);
					WaitForSingleObject(pi.hProcess,INFINITE);
					b=0;
					bh->EnableWindow();
					if(terminator) PostMessage(hz,WM_CLOSE,NULL,NULL);
					else 
					{   
						bear.SetAt(monte-2,reserve);
						bear.Replace("\n","\\line\n");  //(semi)human-readable thing -    latex2rtf.sourceforge.net/RTF-Spec-1.0.txt
						bear="\
{\\rtf1\\ansi\\deff0{\\colortbl;\\red0\\green0\\blue0;\\red60\\green2\\blue105;\\red232\\green34\\blue5;} " 
+ 
bear
+ z.X8
+ "\
\\trowd \\trrh740 \
\\clvertalc\\qc\\clbrdrt\\brdrw100\\brdrcf2\\cellx3400\n\
\\intbl speed" + z.X7 + "\\cell\n\
\\row\n}";
						SendMessage(hc,EM_SETTEXTEX,(WPARAM)&fw,(LPARAM)(LPCSTR)bear);
						PostMessage(hc, WM_VSCROLL, SB_BOTTOM, 0);
					}
					bren=5;
					SetThreadExecutionState(ES_CONTINUOUS);
					break;				 //'Both break and continue have no effect on an if-statement.Both break and continue have no effect on an if-statement. A common misconception is
										 //that break can be used to jump out of an if compound statement.' An Introduction to the C Programming Language and Software Design.   Tim Bailey 2005
				}
			}
                Sleep(tm);
        }
}

CWinThread *rew;
int trigger;
int terminator2;

void CMainFrame::tr()
{   
	FILE *xf;
	std::wstringstream fr;
	if(remmi[0]!=L' ') fr << L' ';

	EDITSTREAM es;
	if(!trigger)
	{	
		ZeroMemory(&es,sizeof(es));
		es.dwCookie = (DWORD_PTR) &fr;
		es.pfnCallback = E;
		::SendMessage(hc, EM_STREAMOUT, SF_TEXT|SF_UNICODE, (LPARAM)&es);		
	}
	

	SECURITY_ATTRIBUTES sa={sizeof(SECURITY_ATTRIBUTES), NULL, true};    
			CreatePipe(&stdinRd, &stdinWr, &sa, 1000); 
            CreatePipe(&stdoutRd,&stdoutWr, &sa,400000);
          
			STARTUPINFO si;
			ZeroMemory(&si,sizeof(si));
           
			si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
            si.wShowWindow = SW_HIDE;
            si.hStdOutput = stdoutWr;
            si.hStdError = stdoutWr;         
            si.hStdInput = stdinRd; 	
			wchar_t w[140],ferrum[198];
			ZeroMemory(ferrum,sizeof(ferrum));
			std::wifstream f;
			
			if(!trigger) 
			{
				ZeroMemory(remmi,318*2);
				fr.read(remmi,247);				
				trigger++;

				ExpandEnvironmentStrings(L"%USERPROFILE%\\Documents\\fold.",w,130);
				xf=_wfopen(w,L"w");
				fwprintf(xf,L"%s",t->f);
				fwprintf(xf,L"\n%s",&remmi[1]);
				fclose(xf);
			}
				 cmdos->EnableWindow();
			

			
			int h=CreateProcess(t->f + L"\\monerod.exe",remmi, NULL, NULL, TRUE, CREATE_NEW_PROCESS_GROUP, NULL, t->f, &si, &pi);        
			if(!h) 
			{

				MessageBox(L"Bad start,check location");
				return;
			}
			bren=0;
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
	if(!t) t=new r();
	int c= t->DoModal();
	

	wchar_t w[140];
	ExpandEnvironmentStrings(L"%USERPROFILE%\\Documents\\fold.",w,130);
	FILE *xf;

	if(c==IDOK)
	{
		xf=_wfopen(w,L"w");
		t->init();
		fwprintf(xf,L"%s",t->f);
		fwprintf(xf,L"\n%s",remmi);
		fclose(xf);
		bh->EnableWindow();	
	}
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
	bhr=NULL;					// Petzold recommendation about to deal with COM
	CoUninitialize();
}

afx_msg LRESULT CMainFrame::OnRet(WPARAM wParam, LPARAM lParam) //Win7 progress bar over a taskbar's bay of this app. WM_ret finished up here.  
{
	 AfxBeginThread((AFX_THREADPROC)hammer,NULL);	
	return 0;
}


void CMainFrame::OnClose()
{
	// TODO: Add your message handler code here and/or call default
	if(terminator2)
	{
		DWORD c=WaitForSingleObject(pi.hProcess,10);
		if(c!= WAIT_TIMEOUT) {SetEvent(cl); CWnd::OnClose();}
	}
	terminator2++;

	if((!b)&&(bren))	{SetEvent(cl); CWnd::OnClose();}
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
	::PostMessage(hc,EM_SETTEXTEX,(WPARAM)&fw,(LPARAM)remmi);
	trigger=5-bren;
}
