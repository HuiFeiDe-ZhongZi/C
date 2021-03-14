#pragma once
class CNum
{
public:
	int m_nNum;
public:
	CNum();
	~CNum();
public:
	int operator=(int num);
	int operator+(int num);
	int operator+(CNum& num);
	int operator++();
	int operator++(int a);
};

