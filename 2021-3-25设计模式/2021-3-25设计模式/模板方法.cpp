//#include<iostream>
//using namespace std;
//
////设计模板-模板方法
////模板方法用于，每个类都有这个功能，事项的过程是一样的，
////            其中有一些细微的变化，变化的地方，变化的地方设置成纯虚函数
////            让子类单独重写
//
////设计原则之一，依赖倒转，针对于抽象层编程，不要针对于某具体层
//
//class CPerson
//{
//public:
//	virtual void EatStyle() = 0;
//public:
//	void Eat()
//	{
//		cout << "来一碗饭" << endl;
//		this->EatStyle();
//		cout << "放到嘴里" << endl;
//		cout << "咬几下" << endl;
//		cout << "咽下去" << endl;
//		cout << "出来" << endl;
//	}
//};
//
//class CChina:public CPerson
//{
//public:
//	void EatStyle()
//	{
//		cout << "用筷子" << endl;
//	}
//};
//
//class CUS :public CPerson
//{
//public:
//	void EatStyle()
//	{
//		cout << "用叉子" << endl;
//	}
//};
//
//class CJP :public CPerson
//{
//public:
//	void EatStyle()
//	{
//		cout << "用脚" << endl;
//	}
//};
//int main()
//{
//	CChina cn;
//	cn.Eat();
//	cout << "------------------------------------------------" << endl;
//	CUS us;
//	us.Eat();
//	cout << "------------------------------------------------" << endl;
//	CJP jp;
//	jp.Eat();
//	cout << "------------------------------------------------" << endl;
//	cn.EatStyle();
//
//	system("pause");
//	return 0;
//}