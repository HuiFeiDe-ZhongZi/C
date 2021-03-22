#include "Player.h"



CPlayer::CPlayer()
{
	m_hBmpPlayer = 0;
	x = 160;
	y = 490;
	m_nGunnerStyle = 1;
}


CPlayer::~CPlayer()
{
	::DeleteObject(m_hBmpPlayer);
	m_hBmpPlayer = 0;
}


void CPlayer::InitPlayer(HINSTANCE hIns)
{
	m_hBmpPlayer=::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_PLAYER));
}
void CPlayer::ShowPlayer(HDC hdc)
{
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	::SelectObject(hdcmen, m_hBmpPlayer);
	::BitBlt(hdc, x, y, 60, 60, hdcmen, 0, 0, SRCAND);
	::DeleteDC(hdcmen);
}
void CPlayer::MovePlayer(int FX)
{
	if (FX == VK_LEFT)
	{
		if(x>0)
		x -= 2;
	}

	if (FX == VK_RIGHT)
	{
		if (x<320)
			x += 2;
	}

	if (FX == VK_UP)
	{
		if (y>0)
			y -= 2;
	}

	if (FX == VK_DOWN)
	{
		if (y<490)
			y += 2;
	}
}

void CPlayer::SendGunner(HINSTANCE hIns, CGunnerBox& gunBox)
{
	//创建炮弹对象
	CGunner* pGunner = new CGunner;
	//初始化这个炮弹
	pGunner->InitGunner(hIns, x + 27, y - 9);
	//添加到盒子里
	gunBox.m_lstGunner.push_back(pGunner);
}