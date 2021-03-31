
// MsgView.h : CMsgView ��Ľӿ�
//

#pragma once


class CMsgView : public CView
{
protected: // �������л�����
	CMsgView();
	DECLARE_DYNCREATE(CMsgView)

// ����
public:
	CMsgDoc* GetDocument() const;

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
	virtual ~CMsgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

public:
	//afx_msg void OnLButtonDown(UINT uFlag, CPoint point);

	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // MsgView.cpp �еĵ��԰汾
inline CMsgDoc* CMsgView::GetDocument() const
   { return reinterpret_cast<CMsgDoc*>(m_pDocument); }
#endif

