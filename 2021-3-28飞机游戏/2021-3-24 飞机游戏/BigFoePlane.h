#pragma once
#include "FoePlane.h"
class CBigFoePlane :
	public CFoePlane
{
public:
	CBigFoePlane();
	~CBigFoePlane();
public:
	virtual void InitFoePlane(HINSTANCE hIns);
	virtual void FoePlaneMove();
	virtual void ShowFoePlane(HDC hdc);
	virtual bool IsHitPlayer(CPlayer& plane);
	virtual bool IsGunnerHitFoePlane(CGunner* pGunner);
};

