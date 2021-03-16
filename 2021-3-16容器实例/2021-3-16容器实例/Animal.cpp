#include "Animal.h"
#include<iostream>
using namespace std;



CAnimal::CAnimal()
{
	m_strColor = "";
	m_strSex = "";
	m_strName = "";
}


CAnimal::~CAnimal()
{
}

void CAnimal::Init(string strColor,  string strName,string strSex)
{
	m_strColor = strColor;
	m_strSex = strSex;
	m_strName = strName;
}
void CAnimal::Show()
{
	cout << "Color:" << m_strColor << "   Sex:" << m_strSex << "   Name:" << m_strName << endl;
}
void CAnimal::Play()
{
	cout << "大家一起来" << endl;
}