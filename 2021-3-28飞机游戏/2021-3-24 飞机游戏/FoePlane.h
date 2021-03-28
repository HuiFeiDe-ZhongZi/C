#pragma once
#include"Sys.h"
#include"Player.h"
#include"Gunner.h"
class CFoePlane
{
public:
	CFoePlane();
	virtual ~CFoePlane();
public:
	int x;
	int y;
	HBITMAP m_hBmpFoePlane;
	int m_nBlood;
	int m_nShowID;
public:
	virtual void InitFoePlane(HINSTANCE hIns) = 0;
	virtual void FoePlaneMove() = 0;
	virtual void ShowFoePlane(HDC hdc) = 0;
	virtual bool IsHitPlayer(CPlayer& plane) = 0;
	virtual bool IsGunnerHitFoePlane(CGunner* pGunner) = 0;
public:
	bool IsBoom();
	void DownBlood();
};

