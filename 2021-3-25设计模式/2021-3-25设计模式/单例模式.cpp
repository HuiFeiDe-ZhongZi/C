//#include <iostream>
//using namespace std;
//
//
//
////class CPerson
////{
////private:          //  ͨ��private���죬���δ�������
////	CPerson()
////	{
////	
////	}
////private:
////	static bool bflag;  //  ��ǳ������Ƿ���ڶ���
////public:
////	static CPerson* GetObject()   //  ��ȡ����Ľӿ�
////	{
////		if(bflag == false)
////		{
////			CPerson* pp = new CPerson;
////			bflag = true;
////			return pp;
////		}
////		return NULL;
////	}
////};
////bool CPerson::bflag = false;
//
//
//
//
//
//class CPerson
//{
//private:          //  ͨ��private���죬���δ�������
//	CPerson()
//	{
//
//	}
//	CPerson(CPerson& pp)
//	{
//
//	}
//private:
//	static CPerson* pObject;  //  ��ǳ������Ƿ���ڶ���
//public:
//	static CPerson* GetObject()   //  ��ȡ����Ľӿ�
//	{
//		if (pObject == 0)
//		{
//			pObject = new CPerson;
//		}
//		return pObject;
//	}
//};
//CPerson* CPerson::pObject = 0;
//
//
//
//int main()
//{
//	CPerson* pp1 = CPerson::GetObject();
//	CPerson* pp2 = CPerson::GetObject();
//
//
//
//	system("pause");
//	return 0;
//}