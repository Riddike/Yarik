
// ChildFrm.h : ��������� ������ CChildFrame
//

#pragma once
#include "ChildView.h"

class CChildFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CChildFrame)
public:
	CChildFrame();

// ��������
public:

// ��������
public:

// ���������������
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);

// ����������
public:
	// ������������� ��� ���������� ������� �����.
	CChildView m_wndView;
	virtual ~CChildFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// ��������� ������� ����� ���������
protected:
	afx_msg void OnFileClose();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
};
