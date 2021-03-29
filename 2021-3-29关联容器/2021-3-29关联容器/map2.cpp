//#include<iostream>
//#include<map>
//#include<list>
//#include<algorithm>
//#include<string>
//using namespace std;


//  map 内部的结构是 红黑树（RBTree） 查找的效率是 0（log2n）

//int main()
//{
//	//struct Node
//	//{
//	//	string m_strName;
//	//	int m_nNum;
//	//};
//	//list<Node> mp;
//	//Node p1 = { "理工大学",106 };
//	//Node p2 = { "黑大",104 };
//	//Node p3 = { "服装城",102 };
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
//	map<string, list<int>> mp;             //mp["理工大学"]==>list
//	mp["理工大学"].push_back(110);
//	mp["理工大学"].push_back(111);
//	mp["理工大学"].push_back(112);
//
//	mp["黑大"].push_back(99);
//	mp["黑大"].push_back(100);
//	mp["黑大"].push_back(101);
//
//	mp["服装城"].push_back(66);
//	mp["服装城"].push_back(67);
//	mp["服装城"].push_back(68);
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