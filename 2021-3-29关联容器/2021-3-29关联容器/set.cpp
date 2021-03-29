#include<iostream>
#include<set>
using namespace std;

//通过集合去除重复
int main()
{
	int arr[15] = { 1,3,4,2,5,2,3,1,2,4,1,3,1,1,3 };
	set<int> st(arr, arr+15);

	set<int>::iterator ite = st.begin();
	while (ite != st.end())
	{
		cout << *ite << " ";
		++ite;
	}


	system("pause");
	return 0;
}