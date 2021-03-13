//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//	virtual void Show() = 0;     //纯虚函数
//};
//
//// 如果一个类中所有函数都是纯虚函数，这个类叫接口类
//
//class CSon :public CFather
//{
//public:
//	void Show()
//	{
//		cout << "CSon::Show" << endl;
//	}
//};
//int main()
//{
//	//CFather pp; //包含纯虚函数的类叫抽象类，是不能定义对象的
//	CSon son;  //纯虚函数要求派生类一定要重写这个函数，如果不重写这个类也是不能定义对象的
//
//
//
//	system("pause");
//	return 0;
//}