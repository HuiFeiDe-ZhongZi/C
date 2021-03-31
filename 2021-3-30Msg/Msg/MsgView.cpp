
// MsgView.cpp : CMsgView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Msg.h"
#endif

#include "MsgDoc.h"
#include "MsgView.h"

#ifdef _DEBUGh
#define new DEBUG_NEW
#endif


// CMsgView

IMPLEMENT_DYNCREATE(CMsgView, CView)

BEGIN_MESSAGE_MAP(CMsgView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	//ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMsgView ����/����

CMsgView::CMsgView()
{
	// TODO: �ڴ˴���ӹ������

}

CMsgView::~CMsgView()
{
}

BOOL CMsgView::PreCreateWindow(CREATESTRUCT& cs)
{ 
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMsgView ����

void CMsgView::OnDraw(CDC* /*pDC*/)
{
	CMsgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMsgView ��ӡ

BOOL CMsgView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMsgView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMsgView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMsgView ���

#ifdef _DEBUG
void CMsgView::AssertValid() const
{
	CView::AssertValid();
}

void CMsgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMsgDoc* CMsgView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMsgDoc)));
	return (CMsgDoc*)m_pDocument;
}
#endif //_DEBUG


// CMsgView ��Ϣ�������

//afx_msg void  CMsgView::OnLButtonDown(UINT uFlag, CPoint point)
//{
//	::MessageBox(0, _T("����hang"),_T("�˲˲�"), MB_OK);
//}

void CMsgView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//::MessageBox(0, _T("������˶��"), _T("ȫ��������"), MB_OK);
	CView::OnLButtonDown(nFlags, point);
}


void CMsgView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (nChar == VK_SPACE)
	{
		TRACE("OnKeyDown->%d\n", 100);
	}
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
