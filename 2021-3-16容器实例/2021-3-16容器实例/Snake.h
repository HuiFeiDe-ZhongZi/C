#pragma once
#include "Animal.h"
class CSnake :
	public CAnimal
{
public:
	CSnake();
	~CSnake();
public:
	virtual void Play();
};

