//#include <stdio.h>
//
//typedef struct AA
//{
//	int id;
//	char *name;
//	char *tel;
//	struct AA *pNext;
//}List;
//
//int main()
//{
//	List a = { 1,"����","111",NULL };
//	List b = { 2,"����","222",NULL };
//	List c = { 3,"����","333",NULL };
//	List d = { 4,"�𱴿�","444",NULL };
//	List e = { 5,"�����","555",NULL };
//	List *p = &a;
//
//	a.pNext = &b;
//	b.pNext = &c;
//	c.pNext = &d;
//	d.pNext = &e;
//
//	//�����ṹ��
//	while (p != NULL)
//	{
//		printf("%d  %s  %s\n", p->id, p->name, p->tel);
//		p = p->pNext;
//	}
//
//	return 0;
//}