//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//
//int main()
//{
//	unordered_map<char, int> hp;
//	FILE* pf = 0;
//	//::fopen_s(&pf, "aa.txt", "rb");
//	//::fopen_s(&pf, ".\\aa.txt", "rb");    //.\\文件在同级目录下
//	::fopen_s(&pf, "..\\res\\aa.txt", "rb");    //..代表在上一层目录下
//
//	char c;
//	while ((c = fgetc(pf)) != EOF)
//	{
//		if (hp.count(c) == 0)
//			hp[c] = 1;
//		else
//			hp[c]++;
//	}
//	::fclose(pf);
//	//-------------------------------------------------------------------------------
//	unordered_map<char, int>::iterator ite = hp.begin();
//	char cMax = ite->first;
//	int nMax = ite->second;
//	while (ite != hp.end())
//	{
//		if (ite->second>nMax)
//		{
//			cMax = ite->first;
//			nMax = ite->second;
//		}
//		++ite;
//	}
//	cout << cMax << "   " << nMax << endl;
//	system("pause");
//	return 0;
//}