
// 2021-4-1Draw.h : 2021-4-1Draw Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy202141DrawApp:
// �йش����ʵ�֣������ 2021-4-1Draw.cpp
//

class CMy202141DrawApp : public CWinAppEx
{
public:
	CMy202141DrawApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy202141DrawApp theApp;
