//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//	CFather()
//	{
//		cout << "CFather" << endl;
//	}
//	virtual ~CFather()          //虚析构 通过父类的指针完整的删除一个子类的对象
//	{
//		cout << "~CFather" << endl;
//	}
//};
//
//
//class CSon :public CFather
//{
//public:
//	CSon()
//	{
//		cout << "CSon" << endl;
//	}
//	~CSon()
//	{
//		cout << "~CSon" << endl;
//	}
//};
//int main()
//{
//	{
//		CFather *son = new CSon;
//		delete son;
//	}
//
//
//	system("pause");
//	return 0;
//}