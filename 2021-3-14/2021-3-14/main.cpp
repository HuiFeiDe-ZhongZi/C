#include<iostream>
#include "Num.h"
using namespace std;

//���������ַ�ʽ��һ���������ڣ�һ����������
//���ز�������Ҫ�з���ֵ����ΪҪ�����ĺ��������Ž��
 
int operator+(int nNum, CNum& num)
{
	return nNum + num.m_nNum;
}

ostream& operator<<(ostream& os, CNum& num)
{
	os << num.m_nNum;
	return os;

}
int main()
{
//---------------------------------��������------------------------------------------------------
	//����1��
	CNum num;
	num = 100;
	cout << num.m_nNum << endl;
	//����2��
	CNum num1;
	num1 = num + 100;
	cout << num1.m_nNum << endl;
	//����3��
	CNum num2;
	num2 = num1 + num;
	cout << num2.m_nNum << endl;
//-----------------------------------��������--------------------------------------------------------	
	num2 = 456 + num1;
	cout << num2.m_nNum << endl;
	
	cout << num2 << endl;
//-----------------------------------��++  ��++--------------------------------------------------
	CNum num3;
	
	cout << num3++ << endl;
	cout << ++num3 << endl;

	system("pause");
	return 0;
}