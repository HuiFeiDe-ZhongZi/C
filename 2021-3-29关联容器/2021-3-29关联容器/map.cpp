//#include<iostream>
//#include<map>
//#include<algorithm>
//using namespace std;
//
//void Show(pair<char,int> pr)
//{
//	cout << pr.first << "  " << pr.second << endl;
//}
//int main()
//{
//	map<char, int> ps;
//	ps['A'] = 100;
//	ps['B'] = 200;
//	ps['C'] = 300;
//	ps['D'] = 400;
//	ps['E'] = 500;
//	ps['F'] = 600;
//	ps['G'] = 700;
//
//	//map<char, int>::iterator ite = ps.begin();
//	//while (ite != ps.end())
//	//{
//	//	cout << ite->first << "  " << ite->second << endl;
//	//	++ite;
//	//}
//
//	for_each(ps.begin(), ps.end(), &Show);
//	cout << "-----------------------------------------------------------------------" << endl;
//	map<char, int>::iterator ite = ps.begin();
//	ite->second = 123;                            //可以修改里边的实值
//	for_each(ps.begin(), ps.end(), &Show);
//	cout << "-----------------------------------------------------------------------" << endl;
//	ite = ps.find('B');   //查找
//	ps.erase(ite);   //删除
//	for_each(ps.begin(), ps.end(), &Show);
//	cout << "-----------------------------------------------------------------------" << endl;
//	pair<char, int> pr('B', 456);
//	ps.insert(pr);             //插入
//	for_each(ps.begin(), ps.end(), &Show);
//	cout << "-----------------------------------------------------------------------" << endl;
//	cout << ps.count('B') << endl;   //统计
//	cout << ps.size() << endl;   //元素的个数
//
//	ite = ps.lower_bound('C');
//	cout << ite->first << "  " << ite->second << endl;
//
//
//	ite = ps.upper_bound('D');
//	cout << ite->first << "  " << ite->second << endl;
//	system("pause");
//	return 0;
//}