#pragma once
#include<string>
using namespace std;

class CAnimal
{
public:
	CAnimal();
	~CAnimal();
public:
	string m_strColor;
	string m_strSex;
	string m_strName;
public:
	void Init(string strColor, string strSex, string strName);
	void Show();
	virtual void Play() = 0;
};

