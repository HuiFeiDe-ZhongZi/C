#pragma once
#include "Animal.h"
class CDog :
	public CAnimal
{
public:
	CDog();
	~CDog();
public:
	virtual void Play();
};

