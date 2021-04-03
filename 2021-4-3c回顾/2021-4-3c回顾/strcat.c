//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//char *Mystrcat(char *str1, char *str2);
//
//int main()
//{
//	char str1[10] = "abc";
//	char *str2 = "123";
//
//	//strcat(str1, str2);
//	/*strcat_s(str1,sizeof(str1), str2);*/
//	Mystrcat(str1, str2);
//	printf("%s\n", str1);
//
//
//	return 0;
//}
//
//char *Mystrcat(char *str1, char *str2)
//{
//	char *p = str1;
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	while (*str2 != '\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = '\0';
//	return p;
//}