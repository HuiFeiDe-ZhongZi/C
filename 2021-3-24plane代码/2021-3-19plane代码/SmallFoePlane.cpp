#include "SmallFoePlane.h"



CSmallFoePlane::CSmallFoePlane()
{
	x = rand() % (380 - 34);
	y = -28;
	m_nBlood = 1;
	m_nShowID = 1;
}


CSmallFoePlane::~CSmallFoePlane()
{
}


bool CSmallFoePlane::IsGunnerHitFoePlane(CGunner *pGunner)
{
	if (pGunner->x >= this->x && pGunner->x <= this->x + 34
		&& pGunner->y >= this->y && pGunner->y <= this->y + 28)
		return true;
	return false;

}
bool CSmallFoePlane::IsHitPlayer(CPlayer& plane)
{
	//x+30,y
	if (plane.x + 30 >= this->x&&plane.x + 30 <= this->x + 34
		&& plane.y > this->y&&plane.y < this->y + 28)
		return true;
	//x+60 y+50
	if (plane.x + 60 >= this->x&&plane.x + 60 <= this->x + 34
		&& plane.y > this->y&&plane.y < this->y + 28)
		return true;
	//x  y+50
	if (plane.x >= this->x&&plane.x  <= this->x + 34
		&& plane.y+50 > this->y&&plane.y+50< this->y + 28)
		return true;
	return false;
}
void CSmallFoePlane::InitFoePlane(HINSTANCE hIns)
{
	m_hBmpFoePlane = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_SMALL));
}
void CSmallFoePlane::ShowFoePlane(HDC hdc)
{
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	::SelectObject(hdcmen, m_hBmpFoePlane);
	::BitBlt(hdc, x, y, 34, 28, hdcmen, 0, (1 - m_nShowID) * 28, SRCAND);
	::DeleteDC(hdcmen);
}
void CSmallFoePlane::FoePlaneMove()
{
	y += 6;
}
