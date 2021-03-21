#pragma once
#include "GameApp.h"
#include"Back.h"
#include"Player.h"


class CPlaneApp :
	public CGameApp
{
public:
	CBack back;   //±³¾°
	CPlayer plane;
public:
	CPlaneApp();
	~CPlaneApp();
public:
	virtual void OnCreateGame();// WM_CREATE
	virtual void OnGameDraw();// WM_PAINT
	virtual void OnGameRun(WPARAM nTimerID); // WM_TIMER
	virtual void OnKeyDown(WPARAM nKey);// WM_KEYDOWN
};

