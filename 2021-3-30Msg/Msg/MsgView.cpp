
// MsgView.cpp : CMsgView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	//ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMsgView 构造/析构

CMsgView::CMsgView()
{
	// TODO: 在此处添加构造代码

}

CMsgView::~CMsgView()
{
}

BOOL CMsgView::PreCreateWindow(CREATESTRUCT& cs)
{ 
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMsgView 绘制

void CMsgView::OnDraw(CDC* /*pDC*/)
{
	CMsgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMsgView 打印

BOOL CMsgView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMsgView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMsgView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMsgView 诊断

#ifdef _DEBUG
void CMsgView::AssertValid() const
{
	CView::AssertValid();
}

void CMsgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMsgDoc* CMsgView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMsgDoc)));
	return (CMsgDoc*)m_pDocument;
}
#endif //_DEBUG


// CMsgView 消息处理程序

//afx_msg void  CMsgView::OnLButtonDown(UINT uFlag, CPoint point)
//{
//	::MessageBox(0, _T("废物hang"),_T("菜菜菜"), MB_OK);
//}

void CMsgView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//::MessageBox(0, _T("生活多姿多彩"), _T("全靠你来吹"), MB_OK);
	CView::OnLButtonDown(nFlags, point);
}


void CMsgView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (nChar == VK_SPACE)
	{
		TRACE("OnKeyDown->%d\n", 100);
	}
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
