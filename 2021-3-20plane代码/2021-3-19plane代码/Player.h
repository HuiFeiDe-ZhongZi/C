#pragma once
#include"Sys.h"
class CPlayer
{
public:
	HBITMAP m_hBmpPlayer;
	int x;
	int y;
	int m_nGunnerStyle;
public:
	CPlayer();
	~CPlayer();
public:
	void InitPlayer(HINSTANCE hIns);
	void ShowPlayer(HDC hdc);
	void MovePlayer(int FX);
	//void SendGunner(HINSTANCE hIns,CGunnerBox& gunBox);
};

