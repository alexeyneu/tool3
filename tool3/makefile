CC=cl
CFLAGS=-c -DSTRICT -G3 -Ow -W3 -Zp -Tp
CFLAGSMT=-c /D_WIN64 /D_AFXDLL /MD /nologo /W3 /WX- /O2 /Oi /Ot /Oy- /DWIN32 /D_WINDOWS /DNDEBUG /D_UNICODE /DUNICODE /Gm- /GS- /Gy /arch:SSE2 /fp:precise /Zc:wchar_t /Zc:forScope /Fax64\Release\ /Fox64\Release\ /Fdx64\Release\vc100.pdb /Gd /errorReport:none 
LINKER=link
GUIFLAGS=-SUBSYSTEM:windows /OUT:x64\Release\tool3.exe /NOLOGO  /PDB:"x64\Release\tool3.pdb" /SUBSYSTEM:WINDOWS /OPT:REF /OPT:NOICF /TLBID:1 /DYNAMICBASE /NXCOMPAT /MACHINE:X64 /ERRORREPORT:NONE /ENTRY:wWinMainCRTStartup /MANIFESTUAC:yes /MANIFESTUAC:level='asInvoker'
DLLFLAGS=-SUBSYSTEM:windows -DLL
GUILIBS=
RC=rc
RCVARS=/DWIN32 /D_WIN64  /DNDEBUG /D_UNICODE /DUNICODE /D_AFXDLL   /l0x0409 /Ix64\Release\ /nologo /fox64\Release\tool3.res
MT=mt
MTSTUFF=/nologo /verbose  -manifest x64\Release\tool3.exe.manifest

docks : trail x64\Release\tool3.exe
	$(MT) $(MTSTUFF) -outputresource:x64\Release\tool3.exe

x64\Release\tool3.exe : x64\Release\tool3.obj x64\Release\MainFrm.obj x64\Release\tool3.res
     $(LINKER) $(GUIFLAGS)  x64\Release\MainFrm.obj x64\Release\tool3.obj  x64\Release\tool3.res $(GUILIBS)
	 
trail:
	-@ if NOT EXIST "x64" mkdir "x64"
	-@ if NOT EXIST "x64\Release" mkdir "x64\Release"

x64\Release\tool3.obj : tool3.cpp tool3.h StdAfx.h resource.h MainFrm.h
	 $(CC) $(CFLAGSMT) tool3.cpp

x64\Release\MainFrm.obj : MainFrm.cpp MainFrm.h StdAfx.h resource.h 
     $(CC) $(CFLAGSMT) MainFrm.cpp

x64\Release\tool3.res : tool3.rc resource.h res\tool3.rc2 
	$(RC) $(RCVARS) tool3.rc




