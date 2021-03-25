#include<iostream>
using namespace std;

template<typename TT>
void bubble(TT *arr, bool (*ptr)(TT a,TT b))
{
	for (int i = 1; i <= n-1; i++)
	{
		for (int j = 1; j <= (n-1) - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{ 
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
//--------------------------------------------------------------------------
bool rule(int a, int b)
{
	return a > b;
}
int main()
{
	int arr[10] = { 4,5,95,65,77,32,84,65,45,78 };
	bubble(arr, 10, rule(a,b));
	for (int a : arr)
		cout << a << "  ";
	cout << endl;


	system("pause");
	return 0;
}