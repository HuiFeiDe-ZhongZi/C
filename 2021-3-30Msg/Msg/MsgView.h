
// MsgView.h : CMsgView 类的接口
//

#pragma once


class CMsgView : public CView
{
protected: // 仅从序列化创建
	CMsgView();
	DECLARE_DYNCREATE(CMsgView)

// 特性
public:
	CMsgDoc* GetDocument() const;

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
	virtual ~CMsgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

public:
	//afx_msg void OnLButtonDown(UINT uFlag, CPoint point);

	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // MsgView.cpp 中的调试版本
inline CMsgDoc* CMsgView::GetDocument() const
   { return reinterpret_cast<CMsgDoc*>(m_pDocument); }
#endif

