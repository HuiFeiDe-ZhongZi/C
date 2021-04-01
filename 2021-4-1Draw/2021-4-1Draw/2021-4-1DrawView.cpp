
// 2021-4-1DrawView.cpp : CMy202141DrawView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy202141DrawView 构造/析构

CMy202141DrawView::CMy202141DrawView()
{
	// TODO: 在此处添加构造代码
	bflag = false;
}

CMy202141DrawView::~CMy202141DrawView()
{
}

BOOL CMy202141DrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy202141DrawView 绘制

void CMy202141DrawView::OnDraw(CDC* /*pDC*/)
{
	CMy202141DrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CDC *pDC = GetDC();
	pDC->Rectangle(0, 0, 100, 100);
	this->ReleaseDC(pDC);

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy202141DrawView 打印

BOOL CMy202141DrawView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy202141DrawView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy202141DrawView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy202141DrawView 诊断

#ifdef _DEBUG
void CMy202141DrawView::AssertValid() const
{
	CView::AssertValid();
}

void CMy202141DrawView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy202141DrawDoc* CMy202141DrawView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy202141DrawDoc)));
	return (CMy202141DrawDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy202141DrawView 消息处理程序


void CMy202141DrawView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	//开始画
	bflag = true;
	pt = point;
	
	CView::OnLButtonDown(nFlags, point);
}


void CMy202141DrawView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//不画了
	bflag = false;


	CView::OnLButtonUp(nFlags, point);
}


void CMy202141DrawView::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

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
