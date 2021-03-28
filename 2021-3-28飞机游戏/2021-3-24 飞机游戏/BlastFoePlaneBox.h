#pragma once
#include"FoePlane.h"
class CBlastFoePlaneBox
{
public:
	CBlastFoePlaneBox();
	~CBlastFoePlaneBox();
public:
	list<CFoePlane*> m_lstFoePlane;
public:
	void AllBlastFoePlaneShow(HDC hdc);
	void ChangeShouID();
};

