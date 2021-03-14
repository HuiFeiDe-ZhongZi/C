#include<iostream>
#include "Num.h"
using namespace std;

//重载有两种方式，一个是在类内，一个是在类外
//重载操作符需要有返回值，因为要继续的和其他符号结合
 
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
//---------------------------------类内重载------------------------------------------------------
	//情形1：
	CNum num;
	num = 100;
	cout << num.m_nNum << endl;
	//情形2：
	CNum num1;
	num1 = num + 100;
	cout << num1.m_nNum << endl;
	//情形3：
	CNum num2;
	num2 = num1 + num;
	cout << num2.m_nNum << endl;
//-----------------------------------类外重载--------------------------------------------------------	
	num2 = 456 + num1;
	cout << num2.m_nNum << endl;
	
	cout << num2 << endl;
//-----------------------------------左++  右++--------------------------------------------------
	CNum num3;
	
	cout << num3++ << endl;
	cout << ++num3 << endl;

	system("pause");
	return 0;
}