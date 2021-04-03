//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//char *GetString()
//{
//	int size = 5;
//	char *str = (char*)malloc(size);
//	int count = 0;
//	char *newstr = NULL;
//	char *pMark = str;
//	char c;
//	while ((c = getchar()) != '\n')
//	{
//		*str = c;
//		str++;
//		count++;
//		if (count + 1 == size)
//		{
//			*str = '\0';
//			size += 5;
//			newstr = (char*)malloc(size);
//			strcpy_s(newstr, size, pMark);
//			free(pMark);
//			str = newstr + count;
//			pMark = newstr;
//		}
//	}
//	*str = '\0';
//	return pMark;
//}
//
//int main()
//{
//	char *p = GetString();
//
//	return 0;
//}