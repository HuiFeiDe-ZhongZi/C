
// 2021-4-1Msg.h : 2021-4-1Msg 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMy202141MsgApp:
// 有关此类的实现，请参阅 2021-4-1Msg.cpp
//

class CMy202141MsgApp : public CWinAppEx
{
public:
	CMy202141MsgApp();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy202141MsgApp theApp;
