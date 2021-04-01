
// 2021-4-1MsgView.cpp : CMy202141MsgView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy202141MsgView 构造/析构

CMy202141MsgView::CMy202141MsgView()
{
	// TODO: 在此处添加构造代码

}

CMy202141MsgView::~CMy202141MsgView()
{
}

BOOL CMy202141MsgView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式
	HCURSOR hCursor = theApp.LoadCursor(IDC_CURSOR1);
	HBRUSH hBrush = ::CreateSolidBrush(RGB(0, 0, 255));
	cs.lpszClass = AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW, hCursor, hBrush);
	return CView::PreCreateWindow(cs);
}  

// CMy202141MsgView 绘制

void CMy202141MsgView::OnDraw(CDC* /*pDC*/)
{
	CMy202141MsgDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy202141MsgView 打印

BOOL CMy202141MsgView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy202141MsgView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy202141MsgView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy202141MsgView 诊断

#ifdef _DEBUG
void CMy202141MsgView::AssertValid() const
{
	CView::AssertValid();
}

void CMy202141MsgView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy202141MsgDoc* CMy202141MsgView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy202141MsgDoc)));
	return (CMy202141MsgDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy202141MsgView 消息处理程序
