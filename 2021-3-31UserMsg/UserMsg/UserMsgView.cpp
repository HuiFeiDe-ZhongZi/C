
// UserMsgView.cpp : CUserMsgView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_MESSAGE(UM_FRAME_TO_VIEW, &CUserMsgView::OnFrameToView)
	
END_MESSAGE_MAP()

// CUserMsgView 构造/析构

CUserMsgView::CUserMsgView()
{
	// TODO: 在此处添加构造代码

}

CUserMsgView::~CUserMsgView()
{
}

BOOL CUserMsgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUserMsgView 绘制

void CUserMsgView::OnDraw(CDC* /*pDC*/)
{
	CUserMsgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CUserMsgView 打印

BOOL CUserMsgView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CUserMsgView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CUserMsgView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CUserMsgView 诊断

#ifdef _DEBUG
void CUserMsgView::AssertValid() const
{
	CView::AssertValid();
}

void CUserMsgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUserMsgDoc* CUserMsgView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUserMsgDoc)));
	return (CUserMsgDoc*)m_pDocument;
}
#endif //_DEBUG


// CUserMsgView 消息处理程序


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