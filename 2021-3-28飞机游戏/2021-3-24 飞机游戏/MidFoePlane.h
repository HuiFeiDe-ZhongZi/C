#pragma once
#include"Sys.h"
#include "FoePlane.h"
class CMidFoePlane :
	public CFoePlane
{
public:
	CMidFoePlane();
	~CMidFoePlane();
public:
	virtual void InitFoePlane(HINSTANCE hIns);
	virtual void FoePlaneMove();
	virtual void ShowFoePlane(HDC hdc);
	virtual bool IsHitPlayer(CPlayer& plane);
	virtual bool IsGunnerHitFoePlane(CGunner* pGunner);
};

