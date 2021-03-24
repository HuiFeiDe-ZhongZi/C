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
	CBack back;   //背景
	CPlayer plane; //玩家飞机
	CGunnerBox gunbox; //炮弹盒子
	CFoePlaneBox foebox;  //敌人飞机
	CBlastFoePlaneBox blastbox; //爆炸的敌人飞机
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

