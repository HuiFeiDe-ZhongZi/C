
// 2021-4-1MsgView.h : CMy202141MsgView ��Ľӿ�
//

#pragma once


class CMy202141MsgView : public CView
{
protected: // �������л�����
	CMy202141MsgView();
	DECLARE_DYNCREATE(CMy202141MsgView)

// ����
public:
	CMy202141MsgDoc* GetDocument() const;

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
	virtual ~CMy202141MsgView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2021-4-1MsgView.cpp �еĵ��԰汾
inline CMy202141MsgDoc* CMy202141MsgView::GetDocument() const
   { return reinterpret_cast<CMy202141MsgDoc*>(m_pDocument); }
#endif

