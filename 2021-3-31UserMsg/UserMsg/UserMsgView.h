
// UserMsgView.h : CUserMsgView ��Ľӿ�
//

#pragma once


class CUserMsgView : public CView
{
protected: // �������л�����
	CUserMsgView();
	DECLARE_DYNCREATE(CUserMsgView)

// ����
public:
	CUserMsgDoc* GetDocument() const;

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
	virtual ~CUserMsgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
public:
	afx_msg LRESULT OnFrameToView(WPARAM wParam, LPARAM lParam);
};

#ifndef _DEBUG  // UserMsgView.cpp �еĵ��԰汾
inline CUserMsgDoc* CUserMsgView::GetDocument() const
   { return reinterpret_cast<CUserMsgDoc*>(m_pDocument); }
#endif

