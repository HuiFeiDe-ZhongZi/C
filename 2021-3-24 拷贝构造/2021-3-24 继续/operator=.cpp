#include<iostream>
using namespace std;

class CPerson
{
public:
	int* m_nAge;
public:
	CPerson()
	{
		m_nAge = new int(100);
	}
	~CPerson()
	{
		delete m_nAge;
		m_nAge = 0;
	}
public:
	//CPerson& operator=(CPerson& pp)   //ǳ����
	//{
	//	this->m_nAge = pp.m_nAge;
	//	return *this;
	//}
	CPerson& operator=(CPerson& pp)   //���
	{
		//ɾ��ԭ�еĿռ�
		delete this->m_nAge;
		this->m_nAge = new int;
		*(this->m_nAge) = *(pp.m_nAge); 

		return *this;
	}
};


int main()
{
	CPerson ps;
	CPerson ps1;
	ps1 = ps;

	system("pause");
	return 0;
}