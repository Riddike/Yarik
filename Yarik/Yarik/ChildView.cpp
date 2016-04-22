
// ChildView.cpp : ���������� ������ CChildView
//

#include "stdafx.h"
#include "Yarik.h"
#include "ChildView.h"
#include "MyObj.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CChildView

CChildView::CChildView()
{
}

CChildView::~CChildView()
{
}


BEGIN_MESSAGE_MAP(CChildView, CWnd)
	ON_WM_PAINT()
END_MESSAGE_MAP()



// ����������� ��������� CChildView

BOOL CChildView::PreCreateWindow(CREATESTRUCT& cs) 
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.dwExStyle |= WS_EX_CLIENTEDGE;
	cs.style &= ~WS_BORDER;
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS, 
		::LoadCursor(NULL, IDC_ARROW), reinterpret_cast<HBRUSH>(COLOR_WINDOW+1), NULL);

	return TRUE;
}

void CChildView::OnPaint() 
{
	
	CPaintDC dc(this);
	MyObj MyObj(200.0, 50.0, 30.0, 40.0, 1200.0, 500.0);
	MyObj.Draw(dc);
	
// �������� ���������� ��� ���������
	
	// TODO: �������� ��� ��������� ���������
	
	// �� ��������� CWnd::OnPaint() ��� ��������� ���������
}

