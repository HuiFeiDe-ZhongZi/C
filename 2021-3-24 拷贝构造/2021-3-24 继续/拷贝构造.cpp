//#include<iostream>
//using namespace std;
//
////什么是拷贝构造？ 参数是当前这个类的引用，的一个构造函数
////拷贝构造什么时候执行？  同类型对象间初始化的过程
////拷贝构造存在哪些问题？  类中默认的是一个浅拷贝，浅拷贝会使两个对象使用同一个空间导致这个空间释放两次
////解决方法：可以提供一个深拷贝，参数换成指针或引用，不存在对象间复制的过程也就没有拷贝
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
//	CPerson(CPerson& pp)  //深构造
//	{
//		this->m_nAge = new int;
//		*(this->m_nAge) = *(pp.m_nAge);
//	}
//	~CPerson()
//	{
//		delete m_nAge;
//		m_nAge = 0;
//	}
//	//类中有一个默认的 拷贝构造  浅拷贝
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