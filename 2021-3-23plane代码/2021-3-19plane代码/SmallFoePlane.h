#pragma once
#include "FoePlane.h"
class CSmallFoePlane :
	public CFoePlane
{
public:
	CSmallFoePlane();
	~CSmallFoePlane();
public:
	virtual bool IsGunnerHitFoePlane(CGunner *pGunner);
	virtual bool IsHitPlayer(CPlayer& plane);
	virtual void InitFoePlane(HINSTANCE hIns);
	virtual void ShowFoePlane(HDC hdc);
	virtual void FoePlaneMove();
};

