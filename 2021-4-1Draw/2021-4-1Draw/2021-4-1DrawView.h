
// 2021-4-1DrawView.h : CMy202141DrawView ��Ľӿ�
//

#pragma once


class CMy202141DrawView : public CView
{
protected: // �������л�����
	CMy202141DrawView();
	DECLARE_DYNCREATE(CMy202141DrawView)

// ����
public:
	CMy202141DrawDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMy202141DrawView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // 2021-4-1DrawView.cpp �еĵ��԰汾
inline CMy202141DrawDoc* CMy202141DrawView::GetDocument() const
   { return reinterpret_cast<CMy202141DrawDoc*>(m_pDocument); }
#endif

