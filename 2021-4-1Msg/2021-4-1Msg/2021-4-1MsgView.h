
// 2021-4-1MsgView.h : CMy202141MsgView 类的接口
//

#pragma once


class CMy202141MsgView : public CView
{
protected: // 仅从序列化创建
	CMy202141MsgView();
	DECLARE_DYNCREATE(CMy202141MsgView)

// 特性
public:
	CMy202141MsgDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMy202141MsgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2021-4-1MsgView.cpp 中的调试版本
inline CMy202141MsgDoc* CMy202141MsgView::GetDocument() const
   { return reinterpret_cast<CMy202141MsgDoc*>(m_pDocument); }
#endif

