//#include<iostream>
//#include<map>
//#include<list>
//#include<algorithm>
//#include<string>
//using namespace std;


//  map �ڲ��Ľṹ�� �������RBTree�� ���ҵ�Ч���� 0��log2n��

//int main()
//{
//	//struct Node
//	//{
//	//	string m_strName;
//	//	int m_nNum;
//	//};
//	//list<Node> mp;
//	//Node p1 = { "����ѧ",106 };
//	//Node p2 = { "�ڴ�",104 };
//	//Node p3 = { "��װ��",102 };
//	//mp.push_back(p1);
//	//mp.push_back(p2);
//	//mp.push_back(p3);
//
//	//string str;
//	//cin >> str;
//
//	//list<Node>::iterator ite = mp.begin();
//	//while (ite != mp.end())
//	//{
//	//	if ((*ite).m_strName == str)
//	//	{
//	//		cout << (*ite).m_nNum << endl;
//	//	}
//	//	++ite;
//	//}
////--------------------------------------------------------------------------------------------------------
//	map<string, list<int>> mp;             //mp["����ѧ"]==>list
//	mp["����ѧ"].push_back(110);
//	mp["����ѧ"].push_back(111);
//	mp["����ѧ"].push_back(112);
//
//	mp["�ڴ�"].push_back(99);
//	mp["�ڴ�"].push_back(100);
//	mp["�ڴ�"].push_back(101);
//
//	mp["��װ��"].push_back(66);
//	mp["��װ��"].push_back(67);
//	mp["��װ��"].push_back(68);
//
//	string str;
//	cin >> str;
//
//	list<int>::iterator ite = mp[str].begin();
//	while (ite != mp[str].end())
//	{
//		cout << *ite << endl;
//		++ite;
//	}
//	system("pause");
//	return 0;
//}