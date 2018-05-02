#include "stdafx.h"
#include "tool3.h"
extern HWND hc,hz;
extern CProgressCtrl *dc;
extern CProgressCtrl *t7;
extern CButton *bh;
extern CButton *q;
extern CButton *finA;
extern CButton *cmdos;
extern CStatic *b7;
extern ITaskbarList3 *bhr;
extern HANDLE cl; 
extern	HANDLE stdinRd, stdinWr, stdoutRd, stdoutWr;
extern int bren;
extern int cr,f,b,terminator;
extern PROCESS_INFORMATION pi;
VOID c(VOID *)
{		

			CWin32Heap stringHeap(HEAP_NO_SERIALIZE, 0, 0);

			CAtlStringMgr M(&stringHeap);

			CStringA X7(&M),X8(&M),Burg(&M);
			CString p(&M);
			triggerblock z2={},z={};
			
			char k[100];
			strcpy(k,"t");
			DWORD numberofbyteswritten;
            DWORD dwRead;
			DWORD totalbytesavailable;
			char output_cmd[500001];
			int h,c,ferrum=0,tm=400;
			BYTE w=0;
			CStringA t(&M),bear(&M);
			SETTEXTEX fw={ 4,CP_THREAD_ACP };
			int monte=0;
			char reserve;
			int r;
			
			bhr->SetProgressState(hz,TBPF_NORMAL);
			dc->SetState(PBST_NORMAL);
			bh->EnableWindow(0);
			q->EnableWindow();

			cmdos->EnableWindow();		
			t7->SetState(PBST_ERROR);
			SetThreadExecutionState(ES_CONTINUOUS|ES_SYSTEM_REQUIRED|ES_AWAYMODE_REQUIRED|ES_DISPLAY_REQUIRED);
			z.c=(::tm *)_aligned_malloc(sizeof(::tm),16);
			z.p=(::tm *)_aligned_malloc(sizeof(::tm),16);
			ZeroMemory(z.c,sizeof(::tm));
			ZeroMemory(z.p,sizeof(::tm));
			z2.finishup=10;
			z.E=4;

            while(1)
            {
				PeekNamedPipe(stdoutRd, NULL, 0, NULL, &totalbytesavailable, 0);

			if(totalbytesavailable)
            {   
                    ReadFile(stdoutRd, output_cmd, min(500000,totalbytesavailable), &dwRead, NULL);
                    h = min(500000,totalbytesavailable);
                    output_cmd[h]='\0';
					t=output_cmd;
					if(monte) bear.SetAt(monte-2,reserve);			
					monte=monte+h;
					bear=bear + t;

					if(w++ > 8) { bear=bear.Right(monte=min(monte,1734)); w=0; _clearfp(); }

					reserve=bear[monte-2];
					bear.SetAt(monte-2,'\0');
					
					c=t.Find("Synced");
					if(c != -1)  
					{
						
							memcpy_s(&z2,40,&z,40); // q and block[] ,  
							if( z.finishup!=1)
							{	
								tm=2340;
								z.finishup= -5 + sscanf_s(t.Left(19),"%d-%d-%d %d:%d:%d", &z.c->tm_year ,&z.c->tm_mon, &z.c->tm_mday , &z.c->tm_hour, &z.c->tm_min ,&z.c->tm_sec);
								z.E=min(z.E, z.E - z.finishup);      //first Anchor 
								z.c->tm_year-=1900;
								z.t=_mktime64(z.c);
							}

							if(z.E < 2+1)
							{
	
								sscanf_s(t.Left(19),"%d-%d-%d %d:%d:%d", &z.p->tm_year ,&z.p->tm_mon, &z.p->tm_mday , &z.p->tm_hour, &z.p->tm_min ,&z.p->tm_sec);
								z.p->tm_year-=1900;
								z.b=_mktime64(z.p);
								z.E=min(z.E, 1);      //third anchor
							}


							t=t.Right(h-c-7);
							t.Truncate(h-c-11);
							r=sscanf_s(t,"%d/%d",&z.block[2],&z.block[0]);
							z.F=(double)z.block[2]/z.block[0];
							if(!(_statusfp()&(_EM_INVALID|_EM_ZERODIVIDE))) dc->SetPos(int(100.0f*z.F));
							bhr->SetProgressValue(hz,z.block[2],z.block[0]);
							if((!z.ptrigger)&&r==2) { z.block[1]=z.block[2]; z.ptrigger=8; z.E--; } // second anchor
							if(z.E < 1+1)
							{
								z.q=double(z.block[2] - z.block[1])/(z.b - z.t);
								z2.ptrigger=_statusfp()&(_EM_INVALID|_EM_ZERODIVIDE);
								
								z.outofthis=(z.block[0] - z.block[2] + (z.block[0] - z.block[2]>40000)*22*40000)/(z.q*1440*60);
								if(!(_statusfp()&(_EM_INVALID|_EM_ZERODIVIDE))&&!z2.ptrigger) 
								{
								if((z.E==1)&&(r==2)&&(!z2.ptrigger)) { z.x= 2.89f*z.q; z.E--; } // anchors casted
									z.f=z.q/z.x; 
									if((!z.E)&&(!(_statusfp()&(_EM_INVALID|_EM_ZERODIVIDE)))) t7->SetPos(140.0*z.f); //after some runs with zero-divided args(or smth else like this) it refuses to deal any further												
									z2.finishup=min(z2.finishup,(int)ceil(z.outofthis*10))*(1 - b);
									if(z2.finishup >2) p.Format(L"days to go %2.1f",z.outofthis);
									if(z2.finishup==2) p.Format(L"days to go %2.1f / %2d",z.outofthis,(int)ceil(24*z.outofthis));
									if(z2.finishup==1) p.Format(L"days to go %2.1f / %2d / %03d",z.outofthis,(int)ceil(24*z.outofthis),(int)ceil(1440*z.outofthis));
									b7->SetWindowTextW((LPCWSTR)p);
									
								}

							}
					}
					Sleep(3);
					SendMessage(hc,EM_SETTEXTEX,(WPARAM)&fw,(LPARAM)(LPCSTR)bear);
					PostMessage(hc, WM_VSCROLL, SB_BOTTOM, 0);					                   
				if(b&&((output_cmd[h-3]=='d')||(output_cmd[h-3]=='.')))  { WriteFile(stdinWr, k, 1, &numberofbyteswritten, NULL); ferrum=1; tm=700;} 
// you'll never know.   https://monero.stackexchange.com/questions/6161/exit-command-pushed-to-pipelined-monerod
				
				if(ferrum&&(output_cmd[h-3]=='y')) 
				{			
						_clearfp();
						X7.Format(" %.2f block/m",z2.q*60.0f);
						z.outofthis=(z2.block[0] - z2.block[2] + (z.block[0] - z.block[2]>40000)*22*40000)/(z2.q*1440*60);
						if(!(_statusfp()&(_EM_INVALID|_EM_ZERODIVIDE))) X8.Format("\\qr\\ri800\\fs30 days to go %.1f \\par\\ri0\\fs33\n",z.outofthis);

					dc->SetState(PBST_PAUSED);
					bhr->SetProgressState(hz,TBPF_PAUSED);
					q->EnableWindow(0);
					WaitForSingleObject(pi.hProcess,INFINITE);
					b=0;
					bh->EnableWindow();
					Burg.Format(">%05d",sizeof(z2));
					if(terminator) PostMessage(hz,WM_CLOSE,NULL,NULL);  // if not to know difference vs sendmessage() it looks like the end  
					else 
					{   
						bear.SetAt(monte-2,reserve);
						bear.Replace("\n","\\line\n");  //(semi)human-readable thing -    latex2rtf.sourceforge.net/RTF-Spec-1.0.txt
						bear="\
{\\rtf1\\ansi\\deff0{\\colortbl;\\red0\\green0\\blue0;\\red60\\green2\\blue105;\\red232\\green34\\blue5;} " 
+ 
bear
+ X8 + Burg+
+ "\
\\trowd \\trrh740 \
\\clvertalc\\qc\\clbrdrt\\brdrw100\\brdrcf2\\cellx3400\n\
\\intbl speed" + X7 + "\\cell\n\
\\row\n}";
						SendMessage(hc,EM_SETTEXTEX,(WPARAM)&fw,(LPARAM)(LPCSTR)bear);
						PostMessage(hc, WM_VSCROLL, SB_BOTTOM, 0);
					}
					bren=5;
					_aligned_free(z.c);
					_aligned_free(z.p);
					break;				 //'Both break and continue have no effect on an if-statement. A common misconception is
										 //that break can be used to jump out of an if compound statement.' An Introduction to the C Programming Language and Software Design.   Tim Bailey 2005
				}
			}
                Sleep(tm);
        }
}