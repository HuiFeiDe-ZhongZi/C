#pragma once
#include "GameApp.h"
#include"Back.h"
#include"Player.h"
#include"Gunner.h"
#include"GunnerBox.h"
#include"FoePlane.h"
#include"FoePlaneBox.h"


class CPlaneApp :
	public CGameApp
{
public:
	CBack back;   //±³¾°
	CPlayer plane; //Íæ¼Ò·É»ú
	CGunnerBox gunbox; //ÅÚµ¯ºÐ×Ó
	CFoePlaneBox foebox;  //µÐÈË·É»ú
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

