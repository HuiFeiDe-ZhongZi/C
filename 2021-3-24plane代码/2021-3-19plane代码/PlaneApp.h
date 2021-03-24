#pragma once
#include "GameApp.h"
#include"Back.h"
#include"Player.h"
#include"Gunner.h"
#include"GunnerBox.h"
#include"FoePlane.h"
#include"FoePlaneBox.h"
#include"BlastFoePlaneBox.h"


class CPlaneApp :
	public CGameApp
{
public:
	CBack back;   //����
	CPlayer plane; //��ҷɻ�
	CGunnerBox gunbox; //�ڵ�����
	CFoePlaneBox foebox;  //���˷ɻ�
	CBlastFoePlaneBox blastbox; //��ը�ĵ��˷ɻ�
public:
	CPlaneApp();
	~CPlaneApp();
public:
	virtual void OnCreateGame();// WM_CREATE
	virtual void OnGameDraw();// WM_PAINT
	virtual void OnGameRun(WPARAM nTimerID); // WM_TIMER
	virtual void OnKeyDown(WPARAM nKey);// WM_KEYDOWN
	void GunnerHitFoePlane();
	bool IsGameOver();
};

