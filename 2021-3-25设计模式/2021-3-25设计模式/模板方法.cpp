//#include<iostream>
//using namespace std;
//
////���ģ��-ģ�巽��
////ģ�巽�����ڣ�ÿ���඼��������ܣ�����Ĺ�����һ���ģ�
////            ������һЩϸ΢�ı仯���仯�ĵط����仯�ĵط����óɴ��麯��
////            �����൥����д
//
////���ԭ��֮һ��������ת������ڳ�����̣���Ҫ�����ĳ�����
//
//class CPerson
//{
//public:
//	virtual void EatStyle() = 0;
//public:
//	void Eat()
//	{
//		cout << "��һ�뷹" << endl;
//		this->EatStyle();
//		cout << "�ŵ�����" << endl;
//		cout << "ҧ����" << endl;
//		cout << "����ȥ" << endl;
//		cout << "����" << endl;
//	}
//};
//
//class CChina:public CPerson
//{
//public:
//	void EatStyle()
//	{
//		cout << "�ÿ���" << endl;
//	}
//};
//
//class CUS :public CPerson
//{
//public:
//	void EatStyle()
//	{
//		cout << "�ò���" << endl;
//	}
//};
//
//class CJP :public CPerson
//{
//public:
//	void EatStyle()
//	{
//		cout << "�ý�" << endl;
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