
// 2021-4-1MsgView.cpp : CMy202141MsgView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2021-4-1Msg.h"
#endif

#include "2021-4-1MsgDoc.h"
#include "2021-4-1MsgView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy202141MsgView

IMPLEMENT_DYNCREATE(CMy202141MsgView, CView)

BEGIN_MESSAGE_MAP(CMy202141MsgView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy202141MsgView ����/����

CMy202141MsgView::CMy202141MsgView()
{
	// TODO: �ڴ˴���ӹ������

}

CMy202141MsgView::~CMy202141MsgView()
{
}

BOOL CMy202141MsgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ
	HCURSOR hCursor = theApp.LoadCursor(IDC_CURSOR1);
	HBRUSH hBrush = ::CreateSolidBrush(RGB(0, 0, 255));
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW, hCursor, hBrush);
	return CView::PreCreateWindow(cs);
}  

// CMy202141MsgView ����

void CMy202141MsgView::OnDraw(CDC* /*pDC*/)
{
	CMy202141MsgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy202141MsgView ��ӡ

BOOL CMy202141MsgView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy202141MsgView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy202141MsgView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy202141MsgView ���

#ifdef _DEBUG
void CMy202141MsgView::AssertValid() const
{
	CView::AssertValid();
}

void CMy202141MsgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy202141MsgDoc* CMy202141MsgView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy202141MsgDoc)));
	return (CMy202141MsgDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy202141MsgView ��Ϣ�������
