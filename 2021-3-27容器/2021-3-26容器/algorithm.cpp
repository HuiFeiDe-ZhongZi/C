//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<time.h>
//using namespace std;
//
//void show(int a)
//{
//	cout << a << " ";
//}
//
//bool rule(int a, int b)
//{
//	return a > b;
//}
//int main()
//{
//	srand((unsigned int)time(0));
//	vector<int> vec(10);
//	for (int i = 0; i < 10; i++)
//	{
//		vec[i] = i;
//	}
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl;
//
//	::random_shuffle(vec.begin(), vec.end());   //�������
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl;
//
//	::sort(vec.begin(), vec.end(),&rule);    //���� Ĭ���Ǵ�С��������  �����Զ��庯��
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl;
//
//	::reverse(vec.begin(), vec.end());     //��ת
//	::for_each(vec.begin(), vec.end(), &show);
//	cout << endl;
//
//	cout << ::count(vec.begin(), vec.end(), 1) << endl;   //ͳ������1������
//
//	system("pause");
//	return 0;
//}
//
//
