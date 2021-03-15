//#include<iostream>
//using namespace std;
//
//class CNum
//{
//public:
//	int m_nNum;
//public:
//	CNum()
//	{
//		m_nNum = 100;
//	}
//public:
//	int operator++()
//	{
//		m_nNum = m_nNum + 1;
//		return m_nNum;
//	}
//	int operator++(int)   //a++
//	{
//		int bj = m_nNum;
//		m_nNum = m_nNum + 1;
//		return bj;
//	}
//};
//
//
//
//int main()
//{
//	CNum num;
//	cout << num++ << endl;   //num.operator++(0)
//	cout << ++num << endl;   // num.operator++()
//
//	system("pause");
//	return 0;
//}