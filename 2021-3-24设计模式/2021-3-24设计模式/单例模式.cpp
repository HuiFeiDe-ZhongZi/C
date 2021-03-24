#include <iostream>
using namespace std;



//class CPerson
//{
//private:          //  通过private构造，屏蔽创建对象
//	CPerson()
//	{
//	
//	}
//private:
//	static bool bflag;  //  标记程序中是否存在对象
//public:
//	static CPerson* GetObject()   //  获取对象的接口
//	{
//		if(bflag == false)
//		{
//			CPerson* pp = new CPerson;
//			bflag = true;
//			return pp;
//		}
//		return NULL;
//	}
//};
//bool CPerson::bflag = false;





class CPerson
{
private:          //  通过private构造，屏蔽创建对象
	CPerson()
	{

	}
	CPerson(CPerson& pp)
	{

	}
private:
	static CPerson* pObject;  //  标记程序中是否存在对象
public:
	static CPerson* GetObject()   //  获取对象的接口
	{
		if (pObject == 0)
		{
			pObject = new CPerson;
		}
		return pObject;
	}
};
CPerson* CPerson::pObject = 0;



int main()
{
	CPerson* pp1 = CPerson::GetObject();
	CPerson* pp2 = CPerson::GetObject();



	system("pause");
	return 0;
}