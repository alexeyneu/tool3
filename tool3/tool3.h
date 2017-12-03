
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
