#pragma once
#include"Gunner.h"
class CGunnerBox
{
public:
	CGunnerBox();
	~CGunnerBox();
public:
	list<CGunner*> m_lstGunner;
public:
	void AllGunnerShow(HDC hdc);
	void AllGunnerMove();

};

