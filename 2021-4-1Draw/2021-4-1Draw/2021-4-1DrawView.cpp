
// 2021-4-1DrawView.cpp : CMy202141DrawView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2021-4-1Draw.h"
#endif

#include "2021-4-1DrawDoc.h"
#include "2021-4-1DrawView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy202141DrawView

IMPLEMENT_DYNCREATE(CMy202141DrawView, CView)

BEGIN_MESSAGE_MAP(CMy202141DrawView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy202141DrawView ����/����

CMy202141DrawView::CMy202141DrawView()
{
	// TODO: �ڴ˴���ӹ������
	bflag = false;
}

CMy202141DrawView::~CMy202141DrawView()
{
}

BOOL CMy202141DrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy202141DrawView ����

void CMy202141DrawView::OnDraw(CDC* /*pDC*/)
{
	CMy202141DrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CDC *pDC = GetDC();
	pDC->Rectangle(0, 0, 100, 100);
	this->ReleaseDC(pDC);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy202141DrawView ��ӡ

BOOL CMy202141DrawView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy202141DrawView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy202141DrawView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy202141DrawView ���

#ifdef _DEBUG
void CMy202141DrawView::AssertValid() const
{
	CView::AssertValid();
}

void CMy202141DrawView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy202141DrawDoc* CMy202141DrawView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy202141DrawDoc)));
	return (CMy202141DrawDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy202141DrawView ��Ϣ�������


void CMy202141DrawView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	//��ʼ��
	bflag = true;
	pt = point;
	
	CView::OnLButtonDown(nFlags, point);
}


void CMy202141DrawView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//������
	bflag = false;


	CView::OnLButtonUp(nFlags, point);
}


void CMy202141DrawView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	if (bflag == true)
	{
		CDC *pDC = GetDC();
		//pDC->Rectangle(0, 0, 1000, 1000);
		pDC->MoveTo(pt);
		pDC->LineTo(point);
		pt = point;
		this->ReleaseDC(pDC);
	}
	CView::OnMouseMove(nFlags, point);
}
