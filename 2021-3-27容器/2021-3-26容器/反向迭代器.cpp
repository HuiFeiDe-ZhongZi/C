//#include<iostream>
//#include<algorithm>
//#include<list>
//#include<time.h>
//using namespace std;
//
//void show(int a)
//{
//	cout << a << " ";
//}
//int main()
//{
//	list<int> lst1;
//
//	lst1.push_back(1);
//	lst1.push_back(3);
//	lst1.push_back(5);
//	lst1.push_back(7);
//	lst1.push_back(9);
//	lst1.push_back(2);
//	lst1.push_back(4);
//	lst1.push_back(6);
//	lst1.push_back(8);
//	lst1.push_back(0);
//
//	//����������㷨
//	//list<int>::iterator ite = --(lst1.end());
//	//while (ite != lst1.begin())
//	//{
//	//	cout << *ite << "  ";
//	//	ite--;
//	//}
//	//cout << *ite << endl;
//
//	//��ת������
//	//list<int>::reverse_iterator revite = lst1.rbegin();
//	//while (revite != lst1.rend())
//	//{
//	//	cout << *revite << " ";
//	//	++revite;
//	//}
//	//cout << endl;
//
//	list<int>::reverse_iterator revite = lst1.rbegin();
//	while (revite != lst1.rend())
//	{
//		if (*revite == 6)                         //�����Ҫɾ��6   ����������뷴������� ��һ��Ԫ��  ���������ַ�������������
//		{                                         //revite.base()  ����ת�����������
//			lst1.erase(--(revite.base()));        //����һ���ȷ�ת �������-1
//			//lst1.erase((++revite).base());        //���������ȵ���+1  ��ת
//		}          
//		++revite;
//	}
//	
//	::for_each(lst1.begin(), lst1.end(), &show);
//
//
//
//	system("pause");
//	return 0;
//}