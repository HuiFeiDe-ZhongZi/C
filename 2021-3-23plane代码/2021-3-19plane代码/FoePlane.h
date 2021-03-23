#pragma once
#include"Sys.h"
#include"Gunner.h"
#include"Player.h"

class CFoePlane
{
public:
	CFoePlane();
	virtual ~CFoePlane();
public:
	int x;
	int y;
	HBITMAP m_hBmpFoePlane;
	int m_nShowID;  //显示图片的哪一部分
	int m_nBlood;    //几滴血
public:
	virtual bool IsGunnerHitFoePlane(CGunner *pGunner) = 0;
	virtual bool IsHitPlayer(CPlayer& plane) = 0;
	virtual void InitFoePlane(HINSTANCE hIns) = 0;
	virtual void ShowFoePlane(HDC hdc) = 0;
	virtual void FoePlaneMove() = 0;
public:
	bool IsBoom();
	void DownBlood();
};

