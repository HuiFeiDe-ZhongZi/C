//#include<stdio.h>
//
//
//char *Mystrcpy(char *str1,char *str2)
//{
//	char *p = str1;
//	while (*str2 != '\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = '\0';
//	return p;
//}
//int main()
//{
//
//	char str1[10];
//	char str2[] = "abcd";
//	//strcpy(str1, str2);
//	//printf("%s\n", str1);
//	//strcpy_s(str1, sizeof(str1), str2);
//
//	Mystrcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}