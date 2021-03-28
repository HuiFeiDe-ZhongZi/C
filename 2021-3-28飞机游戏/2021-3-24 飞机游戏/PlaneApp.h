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
	CBack back;  //��ʾ����
	CPlayer player;  //��ҷɻ�
	CGunnerBox gunbox;  //�����ڵ�
	CFoePlaneBox foebox;//���е��˷ɻ�

public:
	virtual void OnCreateGame(); // WM_CREATE
	virtual void OnGameDraw(); // WM_PAINT
	virtual void OnGameRun(WPARAM nTimerID); // WM_TIMER
	virtual void OnKeyDown(WPARAM nKey); // WM_KEYDOWN
public:
	void GunnerHitFoePlane();   //�ڵ�����˷ɻ�
	//bool IsGameOver();
};

