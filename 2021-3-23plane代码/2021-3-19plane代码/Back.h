#pragma once
#include"Sys.h"

class CBack
{
public:
	CBack();
	~CBack();
public:
	HBITMAP m_hBmpBackUp;
	HBITMAP m_hBmpBackDown;
	int x;
	int y;
public:
	void InitBack(HINSTANCE hIns);
	void ShowBack(HDC hdc);
	void MoveBack();
};

