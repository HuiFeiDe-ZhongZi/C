#pragma once
#include "FoePlane.h"
class CMidFoePlane :
	public CFoePlane
{
public:
	CMidFoePlane();
	~CMidFoePlane();
public:
	virtual bool IsGunnerHitFoePlane(CGunner *pGunner);
	virtual bool IsHitPlayer(CPlayer& plane);
	virtual void InitFoePlane(HINSTANCE hIns);
	virtual void ShowFoePlane(HDC hdc);
	virtual void FoePlaneMove();
};

