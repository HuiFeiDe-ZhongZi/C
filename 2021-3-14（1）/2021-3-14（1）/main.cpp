//#include<iostream>
//#include<list>
//#include<algorithm>  //�㷨ͷ�ļ�
//
//using namespace std;
//
//
//void Show(int nVal)
//{
//	cout << nVal << " ";
//}
//
//int main()
//{
//	list<int> lst;
//	lst.push_front(4);
//	lst.push_front(3);
//	lst.push_front(2);
//	lst.push_front(1);
//	lst.pop_back();
//
//	//list<int>::iterator ite = lst.begin();
//	//while (ite!=lst.end())
//	//{
//	//	cout << *ite << endl;
//	//	ite++;
//	//}
//	//------------------------------------------------------------
//	//���� ��begin��endÿ����������һ��
//	//::for_each(lst.begin(), lst.end(), &Show);
//	//cout << endl;
//
//	//ָ��λ�õĲ����ɾ��
//	list<int>::iterator itepos = ::find(lst.begin(), lst.end(), 2);
//	lst.insert(itepos, 200);
//	itepos = ::find(lst.begin(), lst.end(), 1);
//	lst.erase(itepos);
//	::for_each(lst.begin(), lst.end(), &Show);
//	cout << endl;
//	system("pause");
//	return 0;
//}