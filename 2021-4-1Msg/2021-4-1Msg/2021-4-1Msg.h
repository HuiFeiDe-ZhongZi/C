
// 2021-4-1Msg.h : 2021-4-1Msg Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy202141MsgApp:
// �йش����ʵ�֣������ 2021-4-1Msg.cpp
//

class CMy202141MsgApp : public CWinAppEx
{
public:
	CMy202141MsgApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy202141MsgApp theApp;
