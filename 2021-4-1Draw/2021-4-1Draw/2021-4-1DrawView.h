
// 2021-4-1DrawView.h : CMy202141DrawView 类的接口
//

#pragma once


class CMy202141DrawView : public CView
{
protected: // 仅从序列化创建
	CMy202141DrawView();
	DECLARE_DYNCREATE(CMy202141DrawView)

// 特性
public:
	CMy202141DrawDoc* GetDocument() const;

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
	virtual ~CMy202141DrawView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	POINT pt;
	bool bflag;
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 2021-4-1DrawView.cpp 中的调试版本
inline CMy202141DrawDoc* CMy202141DrawView::GetDocument() const
   { return reinterpret_cast<CMy202141DrawDoc*>(m_pDocument); }
#endif

