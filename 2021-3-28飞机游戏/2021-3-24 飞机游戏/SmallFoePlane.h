#pragma once
#include"Sys.h"
#include "FoePlane.h"
class CSmallFoePlane :
	public CFoePlane
{
public:
	CSmallFoePlane();
	~CSmallFoePlane();
public:
	virtual void InitFoePlane(HINSTANCE hIns);
	virtual void FoePlaneMove();
	virtual void ShowFoePlane(HDC hdc);
	virtual bool IsHitPlayer(CPlayer& plane);
	virtual bool IsGunnerHitFoePlane(CGunner* pGunner);
};

