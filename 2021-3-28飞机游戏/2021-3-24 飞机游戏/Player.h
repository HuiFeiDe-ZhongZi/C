#pragma once
#include"Sys.h"
#include"GunnerBox.h"
class CPlayer
{
public:
	CPlayer();
	~CPlayer();
public:
	int x;
	int y;
	HBITMAP m_hBmpPlayer;
	int m_nStyle;
public:
	void InitPlayer(HINSTANCE hIns);
	void MovePlayer(int FX);
	void ShowPlayer(HDC hdc);
	void SendGunner(HINSTANCE hIns,CGunnerBox& funBox);

	
};

