
// Yarik.cpp : ���������� ��������� ������� ��� ����������.
//

#include "stdafx.h"
#include "afxwinappex.h"
#include "afxdialogex.h"
#include "Yarik.h"
#include "MainFrm.h"

#include "ChildFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CYarikApp

BEGIN_MESSAGE_MAP(CYarikApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &CYarikApp::OnAppAbout)
	ON_COMMAND(ID_FILE_NEW, &CYarikApp::OnFileNew)
END_MESSAGE_MAP()


// �������� CYarikApp

CYarikApp::CYarikApp()
{
	// TODO: �������� ���� ������ �������������� ���������� ������� ����������� ��������������; �������������
	// ������ ��� ������: �����������.�����������.����������.���������������
	SetAppID(_T("Yarik.AppID.NoVersion"));

	// TODO: �������� ��� ��������,
	// ��������� ���� ������ ��� ������������� � InitInstance
}

// ������������ ������ CYarikApp

CYarikApp theApp;


// ������������� CYarikApp

BOOL CYarikApp::InitInstance()
{
	CWinApp::InitInstance();


	EnableTaskbarInteraction(FALSE);

	// ��� ������������� �������� ���������� RichEdit ��������� ����� AfxInitRichEdit2()	
	// AfxInitRichEdit2();

	// ����������� �������������
	// ���� ��� ����������� �� ������������ � ���������� ��������� ������
	// ��������� ������������ �����, ���������� ������� �� ����������
	// ���������� ��������� �������������, ������� �� ���������
	// �������� ������ �������, � ������� �������� ���������
	// TODO: ������� �������� ��� ������ �� ���-������ ����������,
	// �������� �� �������� �����������
	SetRegistryKey(_T("��������� ����������, ��������� � ������� ������� ����������"));


	// ����� ������� ������� ����, ���� ��� ������� ����� ������ ����
	// �����, � ����� ������ ��� ��� ������ ��������� ���� ����������
	CMDIFrameWnd* pFrame = new CMainFrame;
	if (!pFrame)
		return FALSE;
	m_pMainWnd = pFrame;
	// �������� ������� ���� ����� MDI
	if (!pFrame->LoadFrame(IDR_MAINFRAME))
		return FALSE;
	// ���������� ��������� ����� ���� MDI � ������� ��������� ������
	//TODO: �������� �������������� ���������� ������������� � ��������� ������ ���
	//	�������������� ����� ����, ������� ����� ������������� � ����� ����������
	HINSTANCE hInst = AfxGetResourceHandle();
	m_hMDIMenu  = ::LoadMenu(hInst, MAKEINTRESOURCE(IDR_YarikTYPE));
	m_hMDIAccel = ::LoadAccelerators(hInst, MAKEINTRESOURCE(IDR_YarikTYPE));


	// ��������� ������������� ����������� �������� � ������� �������� ����
	CMFCToolBar::m_bExtCharTranslation = TRUE;



	// ������� ���� ���� ����������������, ������� ���������� � �������� ���
	pFrame->ShowWindow(m_nCmdShow);
	pFrame->UpdateWindow();

	return TRUE;
}

int CYarikApp::ExitInstance()
{
	//TODO: ����������� �������������� �������, ������� ����� ���� ���������
	if (m_hMDIMenu != NULL)
		FreeResource(m_hMDIMenu);
	if (m_hMDIAccel != NULL)
		FreeResource(m_hMDIAccel);

	return CWinApp::ExitInstance();
}

// ����������� ��������� CYarikApp

void CYarikApp::OnFileNew() 
{
	CMainFrame* pFrame = STATIC_DOWNCAST(CMainFrame, m_pMainWnd);
	// �������� ����� �������� ���� MDI
	pFrame->CreateNewChild(
		RUNTIME_CLASS(CChildFrame), IDR_YarikTYPE, m_hMDIMenu, m_hMDIAccel);
}

// ���������� ���� CAboutDlg ������������ ��� �������� �������� � ����������

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ������ ����������� ����
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // ��������� DDX/DDV

// ����������
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()

// ������� ���������� ��� ������� �������
void CYarikApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

// ����������� ��������� CYarikApp



