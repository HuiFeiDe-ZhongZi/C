#pragma once
#include "GameApp.h"
#include"Back.h"
#include"Player.h"
#include"GunnerBox.h"
#include"FoePlaneBox.h"

class CPlaneApp :
	public CGameApp
{
public:
	CPlaneApp();
	~CPlaneApp();
public:
	CBack back;  //显示背景
	CPlayer player;  //玩家飞机
	CGunnerBox gunbox;  //所有炮弹
	CFoePlaneBox foebox;//所有敌人飞机

public:
	virtual void OnCreateGame(); // WM_CREATE
	virtual void OnGameDraw(); // WM_PAINT
	virtual void OnGameRun(WPARAM nTimerID); // WM_TIMER
	virtual void OnKeyDown(WPARAM nKey); // WM_KEYDOWN
public:
	void GunnerHitFoePlane();   //炮弹打敌人飞机
	//bool IsGameOver();
};

