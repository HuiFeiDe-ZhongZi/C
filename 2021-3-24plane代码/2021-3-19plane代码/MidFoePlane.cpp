#include "MidFoePlane.h"



CMidFoePlane::CMidFoePlane()
{
	x = rand() %(380-70) ;
	y = -90;
	m_nBlood = 3;
	m_nShowID = 2;
}


CMidFoePlane::~CMidFoePlane()
{
}


bool CMidFoePlane::IsGunnerHitFoePlane(CGunner *pGunner)
{
	if (pGunner->x >= this->x && pGunner->x <= this->x + 70
		&& pGunner->y >= this->y && pGunner->y <= this->y + 90)
		return true;
	return false;

}
bool CMidFoePlane::IsHitPlayer(CPlayer& plane)
{
	//x+30,y
	if (plane.x + 30 >= this->x&&plane.x + 30 <= this->x + 70
		&& plane.y > this->y&&plane.y < this->y + 90)
		return true;
	//x+60 y+50
	if (plane.x + 60 >= this->x&&plane.x + 60 <= this->x + 70
		&& plane.y > this->y&&plane.y < this->y + 90)
		return true;
	//x  y+50
	if (plane.x >= this->x&&plane.x <= this->x + 70
		&& plane.y + 50 > this->y&&plane.y + 50< this->y + 90)
		return true;
	return false;
}
void CMidFoePlane::InitFoePlane(HINSTANCE hIns)
{
	m_hBmpFoePlane = ::LoadBitmap(hIns, MAKEINTRESOURCE(IDB_MID));
}
void CMidFoePlane::ShowFoePlane(HDC hdc)
{
	HDC hdcmen = ::CreateCompatibleDC(hdc);
	::SelectObject(hdcmen, m_hBmpFoePlane);
	::BitBlt(hdc, x, y, 70, 90, hdcmen, 0, (2 - m_nShowID) * 90, SRCAND);
	::DeleteDC(hdcmen);
}
void CMidFoePlane::FoePlaneMove()
{
	y += 4;
}
