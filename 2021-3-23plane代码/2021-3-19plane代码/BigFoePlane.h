#pragma once
#include "FoePlane.h"
class CBigFoePlane :
	public CFoePlane
{
public:
	CBigFoePlane();
	~CBigFoePlane();
public:
	virtual bool IsGunnerHitFoePlane(CGunner *pGunner);
	virtual bool IsHitPlayer(CPlayer& plane);
	virtual void InitFoePlane(HINSTANCE hIns);
	virtual void ShowFoePlane(HDC hdc);
	virtual void FoePlaneMove();
};

