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
//	virtual ~CFather()          //������ ͨ�������ָ��������ɾ��һ������Ķ���
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