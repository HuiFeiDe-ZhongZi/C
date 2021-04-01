
// MainFrm.cpp : CMainFrame ���ʵ��
//

#include "stdafx.h"
#include "2021-4-1Msg.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

const int  iMaxUserToolbars = 10;
const UINT uiFirstUserToolBarId = AFX_IDW_CONTROLBAR_FIRST + 40;
const UINT uiLastUserToolBarId = uiFirstUserToolBarId + iMaxUserToolbars - 1;

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // ״̬��ָʾ��
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame ����/����

CMainFrame::CMainFrame()
{
	// TODO: �ڴ���ӳ�Ա��ʼ������
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	this->SetMenu(0);






	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	cs.cx = 600;
	cs.cy = 600;

	int CX = ::GetSystemMetrics(SM_CXSCREEN);
	int CY = ::GetSystemMetrics(SM_CYSCREEN);
	cs.x = (CX - cs.cx) / 2;
	cs.y = (CY - cs.cy) / 2;
	//------------------------------------------------------------------
	cs.style = cs.style ^ WS_MINIMIZEBOX;
	cs.style = cs.style ^ WS_MAXIMIZEBOX;

	cs.style = WS_POPUP;   //ɾ���߿�

	cs.style = cs.style^FWS_ADDTOTITLE;
	cs.lpszName = _T("O(��_��)O����~");
	//------------------------------------------------------------------
	
	HICON hIcon = theApp.LoadIcon(IDI_ICON1);
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW, 0, 0, hIcon);
	return TRUE;
}

// CMainFrame ���

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif //_DEBUG


// CMainFrame ��Ϣ�������

