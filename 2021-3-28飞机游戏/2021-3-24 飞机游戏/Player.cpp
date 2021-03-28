#include "Player.h"



CPlayer::CPlayer()
{
	x = 160;
	y = 490;
	m_hBmpPlayer = 0;
	m_nStyle = 1;
}


CPlayer::~CPlayer()
{
	::DeleteObject(m_hBmpPlayer);
}


void CPlayer::InitPlayer(HINSTANCE hIns)
{
	m_hBmpPlayer = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_PLAYER));
}
void CPlayer::MovePlayer(int FX)
{
	if (VK_LEFT == FX)
	{
		if (x > 0)
		{
			x -= 2;
		}
	}

	if (VK_RIGHT == FX)
	{
		if (x < 320)
		{
			x += 2;
		}

	}

	if (VK_UP == FX)
	{
		if (y > 0)
		{
			y -= 2;
		}
	}

	if (VK_DOWN == FX)
	{
		if (y < 490)
		{
			y += 2;
		}

	}

}
void CPlayer::ShowPlayer(HDC hdc)
{
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	::SelectObject(hdcmen, m_hBmpPlayer);
	::BitBlt(hdc, x, y, 60, 60, hdcmen, 0, 0, SRCAND);
	::DeleteDC(hdcmen);
}
void CPlayer::SendGunner(HINSTANCE hIns, CGunnerBox& gunBox)
{
	//1.创建炮弹对象
	CGunner* pGunner = new CGunner;
	//2.初始化炮弹
	pGunner->InitGunner(hIns,x+27,y-9);
	//3.添加到链表中
	gunBox.m_lstGunner.push_back(pGunner);
}