#pragma once
#include"Animal.h"
#include"House.h"
#include"Cage.h"
class CAnna
{
public:
	CAnna();
	~CAnna();
public:
	void PushCage(CHouse& house,int nCount);
	bool PushAnimal(CHouse& house,int nId,CAnimal* pAnimal);
	void LookLook(CHouse& house);
	void PlayAnimal(CHouse& house,int nID);
};

