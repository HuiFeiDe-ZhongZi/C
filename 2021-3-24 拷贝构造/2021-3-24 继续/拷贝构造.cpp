//#include<iostream>
//using namespace std;
//
////ʲô�ǿ������죿 �����ǵ�ǰ���������ã���һ�����캯��
////��������ʲôʱ��ִ�У�  ͬ���Ͷ�����ʼ���Ĺ���
////�������������Щ���⣿  ����Ĭ�ϵ���һ��ǳ������ǳ������ʹ��������ʹ��ͬһ���ռ䵼������ռ��ͷ�����
////��������������ṩһ���������������ָ������ã������ڶ���临�ƵĹ���Ҳ��û�п���
//
//
//class CPerson
//{
//public:
//	int* m_nAge;
//public:
//	CPerson()
//	{
//		m_nAge=new int(100);
//	}
//	CPerson(CPerson& pp)  //���
//	{
//		this->m_nAge = new int;
//		*(this->m_nAge) = *(pp.m_nAge);
//	}
//	~CPerson()
//	{
//		delete m_nAge;
//		m_nAge = 0;
//	}
//	//������һ��Ĭ�ϵ� ��������  ǳ����
//};
//
//void QQ(CPerson& pp);
//int main()
//{
//	CPerson ps1;
//	//CPerson ps2(ps1);
//	QQ(ps1);
//
//	system("pause");
//	return 0;
//}