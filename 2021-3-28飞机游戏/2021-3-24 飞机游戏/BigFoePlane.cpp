#include "BigFoePlane.h"



CBigFoePlane::CBigFoePlane()
{
	m_nBlood = 5;
	x = rand()%(380-108);
	y = -128;
	m_nShowID = 3;
}


CBigFoePlane::~CBigFoePlane()
{
	::DeleteObject(m_hBmpFoePlane);
	m_hBmpFoePlane = 0;
}



void CBigFoePlane::InitFoePlane(HINSTANCE hIns)
{
	m_hBmpFoePlane = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_BIG));
}
void CBigFoePlane::FoePlaneMove()
{
	y += 2;
}
void CBigFoePlane::ShowFoePlane(HDC hdc)
{
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	::SelectObject(hdcmen, m_hBmpFoePlane);
	::BitBlt(hdc, x, y, 108, 128, hdcmen, 0,(3-m_nShowID)*128 ,SRCAND);
	::DeleteDC(hdcmen);
}
bool CBigFoePlane::IsHitPlayer(CPlayer& plane)
{

	return false;
}
bool CBigFoePlane::IsGunnerHitFoePlane(CGunner* pGunner)
{
	if (pGunner->x >= this->x && pGunner->x <= this->x + 108
		&& pGunner->y >= this->y && pGunner->y <= this->y + 128)
		return true;
	return false;
}