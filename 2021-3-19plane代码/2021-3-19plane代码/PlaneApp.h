#pragma once
#include "GameApp.h"
#include"Back.h"


class CPlaneApp :
	public CGameApp
{
public:
	CBack back;   //±³¾°

public:
	CPlaneApp();
	~CPlaneApp();
public:
	virtual void OnCreateGame();// WM_CREATE
	virtual void OnGameDraw();// WM_PAINT
	virtual void OnGameRun(WPARAM nTimerID); // WM_TIMER
	virtual void OnKeyDown(WPARAM nKey);// WM_KEYDOWN
};

