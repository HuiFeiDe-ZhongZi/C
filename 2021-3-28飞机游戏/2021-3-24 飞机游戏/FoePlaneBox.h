#pragma once
#include"FoePlane.h"
class CFoePlaneBox
{
public:
	CFoePlaneBox();
	~CFoePlaneBox();
public:
	list<CFoePlane*> m_lstFoePlane;
public:
	void CreatFoePlane(HINSTANCE hIns);
	void AllFoePlaneShow(HDC hdc);
	void AllFoePlaneMove();
};

