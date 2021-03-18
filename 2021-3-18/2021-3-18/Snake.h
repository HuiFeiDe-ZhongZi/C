#pragma once
#include "GameApp.h"
class CSnake :
	public CGameApp
{
public:
	CSnake();
	~CSnake();
public:
	virtual void OnButtonDown(POINT point)
	{
		MessageBox(0, "ºÈ±­²è","À´°¡", MB_OK);
	}
};

