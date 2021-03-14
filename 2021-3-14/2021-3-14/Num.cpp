#include "Num.h"



CNum::CNum()
{
	m_nNum = 100;
}


CNum::~CNum()
{
}

int CNum::operator=(int num)
{
	m_nNum = num;
	return m_nNum;
}

int CNum::operator+(int num)
{
	return m_nNum + num;
}

int CNum::operator+(CNum& num)
{
	return m_nNum + num.m_nNum;
}

int CNum::operator++()
{
	m_nNum = m_nNum + 1;
	return m_nNum;
}
int CNum::operator++(int a)
{
	int bj = m_nNum;
	m_nNum = m_nNum + 1;
	return bj;
}