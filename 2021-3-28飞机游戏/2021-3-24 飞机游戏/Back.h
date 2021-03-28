#pragma once
#include"Sys.h"
class CBack
{
public:
	CBack();
	~CBack();
public:
	int x;
	int y;
	HBITMAP m_hBmpBackUP;
	HBITMAP m_hBmpBackDOWN;
public:
	void InitBack(HINSTANCE hIns);
	void MoveBack();
	void ShowBack(HDC hdc);
};

