#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void show(int a)
{
	cout << a <<"  ";
}
int main()
{

	//vector<int> vec;  //vec��һ���������
	vector<int> vec(10); //����һ��������10��Ԫ��
	for (int i = 0; i < 10; i++)
		cout << vec[i] << "  ";

	vector<int>::iterator ite = vec.begin();
	while (ite != vec.end())
	{
		cout << *ite << " ";
		++ite;
	}

	::for_each(vec.begin(), vec.end(), &show);
	cout << endl << "=======================================" <<endl;


	system("pause");
	return 0;
}