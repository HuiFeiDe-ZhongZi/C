
// UserMsgView.h : CUserMsgView 类的接口
//

#pragma once


class CUserMsgView : public CView
{
protected: // 仅从序列化创建
	CUserMsgView();
	DECLARE_DYNCREATE(CUserMsgView)

// 特性
public:
	CUserMsgDoc* GetDocument() const;

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
	virtual ~CUserMsgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
public:
	afx_msg LRESULT OnFrameToView(WPARAM wParam, LPARAM lParam);
};

#ifndef _DEBUG  // UserMsgView.cpp 中的调试版本
inline CUserMsgDoc* CUserMsgView::GetDocument() const
   { return reinterpret_cast<CUserMsgDoc*>(m_pDocument); }
#endif

