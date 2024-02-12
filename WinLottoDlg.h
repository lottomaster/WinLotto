// TreePropSheetEx_DemoDlg.h : header file
//
/////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2004 by Yves Tkaczyk
// (http://www.tkaczyk.net - yves@tkaczyk.net)
//
// The contents of this file are subject to the Artistic License (the "License").
// You may not use this file except in compliance with the License. 
// You may obtain a copy of the License at:
// http://www.opensource.org/licenses/artistic-license.html
//
// Documentation: http://www.codeproject.com/property/treepropsheetex.asp
// CVS tree:      http://sourceforge.net/projects/treepropsheetex
//
/////////////////////////////////////////////////////////////////////////////

#ifndef _TREEPROPSHEETEX_DEMODLG_H__INCLUDED_
#define _TREEPROPSHEETEX_DEMODLG_H__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <vector>

/////////////////////////////////////////////////////////////////////////////
// CTreePropSheetEx_DemoDlg dialog

class CTreePropSheetEx_DemoDlg : public CDialog
{
// Construction
public:
	CTreePropSheetEx_DemoDlg(CWnd* pParent = NULL);	// standard constructor
  ~CTreePropSheetEx_DemoDlg();

// Dialog Data
	//{{AFX_DATA(CTreePropSheetEx_DemoDlg)
	enum { IDD = IDD_TREEPROPSHEETEX_DEMO_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTreePropSheetEx_DemoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTreePropSheetEx_DemoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnShowTreepropsheet();
	afx_msg void OnResizablePropertysheet();
	afx_msg void OnResizableTreepropsheetex();
	afx_msg void OnResizableTabbedTreepropsheetex();
	afx_msg void OnResizableWizardTreepropsheetex();
	afx_msg void OnChildTreepropsheetex();
	afx_msg void OnModeless();
	afx_msg void OnTreepropsheetoffice2003();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

// Members
private:
  //! Hold all created modeless dialog. 
  std::vector<CPropertySheet*> m_contSheet;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // _TREEPROPSHEETEX_DEMODLG_H__INCLUDED_