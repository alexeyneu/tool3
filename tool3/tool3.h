_declspec(align(16)) struct triggerblock 
{	
	_declspec(align(16)) double q;
	_declspec(align(16)) long long block[3];
	_declspec(align(16)) long long b;
	_declspec(align(16)) long long t;
	_declspec(align(16)) tm *c;
	_declspec(align(16)) tm *p;
	_declspec(align(16)) BYTE ptrigger;
	_declspec(align(16)) float outofthis;
	_declspec(align(16)) double x;
	_declspec(align(16)) long double F;
	_declspec(align(16)) short finishup;
	_declspec(align(16)) double f;
	_declspec(align(16)) BYTE E;
};

// tool3.h : main header file for the tool3 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// Ctool3App:
// See tool3.cpp for the implementation of this class
//

class Ctool3App : public CWinApp
{
public:
	Ctool3App();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:

	DECLARE_MESSAGE_MAP()
};

extern Ctool3App theApp;
