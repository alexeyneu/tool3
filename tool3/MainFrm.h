
// MainFrm.h : interface of the CMainFrame class
//

#pragma once
extern DWORD WM_ret;


class CMainFrame : public CWnd
{
	
public:
	CMainFrame();
protected: 
	DECLARE_DYNAMIC(CMainFrame)

// Attributes
public:
private:
		wchar_t remmi[1618];	
// Operations
public:

// Overrides
public:

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG

#endif



// Generated message map functions
protected:

	DECLARE_MESSAGE_MAP()

public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void tr();
	afx_msg void w();
	afx_msg void uw();
	afx_msg void ef();
	afx_msg void OnDestroy();
protected:
	afx_msg LRESULT OnRet(WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnClose();
protected:
	afx_msg LRESULT OnCtlcolorstatic(WPARAM wParam, LPARAM lParam);
};
extern HINSTANCE h;

