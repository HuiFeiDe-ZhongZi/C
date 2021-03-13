//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//	virtual void AA()
//	{
//		cout << "CFather::AA" << endl;
//	}
//	virtual void BB()
//	{
//		cout << "CFather::BB" << endl;
//	}
//	void CC()
//	{
//		cout << "CFather::CC" << endl;
//	}
//};
//
//
//class CSon:public CFather
//{
//	virtual void AA()
//	{
//		cout << "CSon::AA" << endl;
//	}
//	void CC()
//	{
//		cout << "CSon::CC" << endl;
//	}
//	virtual void DD()
//	{
//		cout << "CSon::DD" << endl;
//	}
//};
//int main()
//{
//	CFather *p = new CSon;
//	typedef void(*PFUN)();
//
//	PFUN aa =(PFUN) *((int*)*(int*)p + 0);
//	PFUN bb = (PFUN)*((int*)*(int*)p + 1);
//	PFUN cc = (PFUN)*((int*)*(int*)p + 2);
//	PFUN dd = (PFUN)*((int*)*(int*)p + 3);
//
//
//	(*cc)();
//
//
//	system("pause");
//	return 0;
//}