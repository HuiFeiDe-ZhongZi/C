
// UserMsg.h : UserMsg Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUserMsgApp:
// �йش����ʵ�֣������ UserMsg.cpp
//

class CUserMsgApp : public CWinAppEx
{
public:
	CUserMsgApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUserMsgApp theApp;
