#pragma once
#include"Sys.h"
class CGunner
{
public:
	CGunner();
	~CGunner();
public:
	int x;
	int y;
	HBITMAP m_hBmpGunner;
public:
	void InitGunner(HINSTANCE hIns,int x,int y);
	void ShowGunner(HDC hdc);
	void MoveGunner();
};

