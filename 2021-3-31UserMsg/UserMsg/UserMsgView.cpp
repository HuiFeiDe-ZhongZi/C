
// UserMsgView.cpp : CUserMsgView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UserMsg.h"
#endif

#include "UserMsgDoc.h"
#include "UserMsgView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUserMsgView

IMPLEMENT_DYNCREATE(CUserMsgView, CView)

BEGIN_MESSAGE_MAP(CUserMsgView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_MESSAGE(UM_FRAME_TO_VIEW, &CUserMsgView::OnFrameToView)
	
END_MESSAGE_MAP()

// CUserMsgView ����/����

CUserMsgView::CUserMsgView()
{
	// TODO: �ڴ˴���ӹ������

}

CUserMsgView::~CUserMsgView()
{
}

BOOL CUserMsgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUserMsgView ����

void CUserMsgView::OnDraw(CDC* /*pDC*/)
{
	CUserMsgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CUserMsgView ��ӡ

BOOL CUserMsgView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CUserMsgView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CUserMsgView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CUserMsgView ���

#ifdef _DEBUG
void CUserMsgView::AssertValid() const
{
	CView::AssertValid();
}

void CUserMsgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUserMsgDoc* CUserMsgView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUserMsgDoc)));
	return (CUserMsgDoc*)m_pDocument;
}
#endif //_DEBUG


// CUserMsgView ��Ϣ�������


void CUserMsgView::OnLButtonDown(UINT nFlags, CPoint point)
{
	//::SendMessage(theApp.m_pMainWnd->m_hWnd, UM_VIEW_TO_FRAME, 0, 0);
	
	theApp.m_pMainWnd->SendMessage(UM_VIEW_TO_FRAME);
	CView::OnLButtonDown(nFlags, point);
}

LRESULT CUserMsgView::OnFrameToView(WPARAM wParam, LPARAM lParam)
{

	TRACE("CUserMsgView::OnFrameToView xiu%d\n", 626);
	return 0;
}