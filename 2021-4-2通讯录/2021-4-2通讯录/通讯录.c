#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct Node
{
	int id;
	char *name;
	char *tel;
	struct Node *pNext;
}List;

typedef struct PAGE
{
	int CurrentPage;	//��ǰҳ
	int TotalInfo;		//������
	int TotalPage;		//��ҳ��
	int OnePageInfo;	//ÿҳ��ʾ������
}Page;

List *GetNode();
void AddNode(List **ppHead, List **ppEnd, List *pNode);
int GetId();
char *GetName();
char *GetTel();
void InitInfo(List **ppHead, List **ppEnd, int n);
Page *GetPage(List *pHead, int n);
void ShowInfo(List *pHead, Page *pPage);
void ShowMenu(Page *pPage);
void TurnPage(List *pHead, Page *pPage);
char GetKey();
void Browse(List *pHead);
char *GetString();
List *GetNodeIn();
void Query(List *pHead);

int g_MenuType;
char g_Key;

int main()
{
	List *pHead = NULL;
	List *pEnd = NULL;
	char c;

	InitInfo(&pHead, &pEnd, 100);

	while (1)
	{
		printf("1.�鿴ͨѶ¼\n");
		printf("2.�����Ϣ\n");
		printf("3.��ѯ��Ϣ\n");
		printf("4.ɾ����Ϣ\n");
		printf("5.�޸���Ϣ\n");
		printf("q.�˳�\n");

		c = GetKey();

		switch (c)
		{
		case '1':
			g_MenuType = 1;
			Browse(pHead);
			break;
		case '2':
			AddNode(&pHead, &pEnd, GetNodeIn());
			break;
		case '3':
			g_MenuType = 3;
			Query(pHead);
			break;
		case '4':
			break;
		case '5':
			break;
		case 'q':
			return 0;
			break;
		}
	}


	return 0;
}

List *GetNode()
{
	List *pTemp = (List*)malloc(sizeof(List));
	pTemp->id = GetId();
	pTemp->name = GetName();
	pTemp->tel = GetTel();
	pTemp->pNext = NULL;

	return pTemp;
}

void AddNode(List **ppHead, List **ppEnd, List *pNode)
{
	if (NULL == *ppHead)
	{
		*ppHead = pNode;
	}
	else
	{
		(*ppEnd)->pNext = pNode;
	}
	*ppEnd = pNode;
}

int GetId()
{
	static int id = 1;

	return id++;
}

char *GetName()
{
	char *str = (char*)malloc(6);
	int i;

	for (i = 0; i<5; i++)
	{
		str[i] = rand() % 26 + 'a';
	}
	str[i] = '\0';

	return str;
}

char *GetTel()
{
	char *str = (char*)malloc(12);
	int i;

	switch (rand() % 4)
	{
	case 0:
		str[0] = '1';
		str[1] = '3';
		str[2] = '3';
		break;
	case 1:
		strcpy_s(str, 12, "155");
		break;
	case 2:
		strcpy_s(str, 12, "177");
		break;
	case 3:
		strcpy_s(str, 12, "188");
		break;
	}

	for (i = 3; i<11; i++)
	{
		str[i] = rand() % 10 + '0';
	}
	str[i] = '\0';

	return str;
}
//ppHead = &pHead   *ppHead = pHead
void InitInfo(List **ppHead, List **ppEnd, int n)
{
	int i;

	srand((unsigned int)time(NULL));

	for (i = 0; i<n; i++)
	{
		AddNode(ppHead, ppEnd, GetNode());
	}
}

Page *GetPage(List *pHead, int n)
{
	Page *pTemp = (Page*)malloc(sizeof(Page));
	pTemp->CurrentPage = 0;
	pTemp->OnePageInfo = n;
	pTemp->TotalInfo = 0;

	//��������
	while (pHead != NULL)
	{
		pTemp->TotalInfo++;
		pHead = pHead->pNext;
	}
	//������ҳ��
	/*if(pTemp->TotalInfo % pTemp->OnePageInfo == 0)
	{
	pTemp->TotalPage = pTemp->TotalInfo / pTemp->OnePageInfo;
	}
	else
	{
	pTemp->TotalPage = pTemp->TotalInfo / pTemp->OnePageInfo + 1;
	}*/

	pTemp->TotalPage = pTemp->TotalInfo % pTemp->OnePageInfo == 0 ?
		pTemp->TotalInfo / pTemp->OnePageInfo : pTemp->TotalInfo / pTemp->OnePageInfo + 1;

	return pTemp;
}

void ShowInfo(List *pHead, Page *pPage)
{
	int begin = (pPage->CurrentPage - 1) * pPage->OnePageInfo + 1;
	int end = pPage->CurrentPage * pPage->OnePageInfo;
	int count = 0;

	while (pHead != NULL)
	{
		count++;
		if (begin <= count && count <= end)
		{
			printf("%d  %s  %s\n", pHead->id, pHead->name, pHead->tel);
		}
		pHead = pHead->pNext;
	}
}

void ShowMenu(Page *pPage)
{
	switch (g_MenuType)
	{
	case 1:
		printf("��ǰ��%dҳ  ��%dҳ  ��%d��  w��һҳ  s��һҳ  b����\n",
			pPage->CurrentPage, pPage->TotalPage, pPage->TotalInfo);
		break;
	case 3:
		printf("��ǰ��%dҳ  ��%dҳ  ��%d��  w��һҳ  s��һҳ  c���²�ѯ  b����\n",
			pPage->CurrentPage, pPage->TotalPage, pPage->TotalInfo);
		break;
	}

}

void TurnPage(List *pHead, Page *pPage)
{
	char c = 's';

	while (1)
	{
		switch (c)
		{
		case 'w':
			if (pPage->CurrentPage > 1)
			{
				pPage->CurrentPage--;
				ShowInfo(pHead, pPage);
				ShowMenu(pPage);
			}
			else
			{
				printf("�Ѿ��ǵ�һҳ��\n");
			}
			break;
		case 's':
			if (pPage->CurrentPage < pPage->TotalPage)
			{
				pPage->CurrentPage++;
				ShowInfo(pHead, pPage);
				ShowMenu(pPage);
			}
			else
			{
				printf("�Ѿ������һҳ��\n");
			}
			break;
		case 'b':
			return;
			break;
		case 'c':
			return;
			break;
		default:
			printf("������\n");
			break;
		}

		c = GetKey();
		g_Key = c;
	}
}

char GetKey()
{
	char c;
	char z;
	int flag = 1;

	while ((c = getchar()) != '\n' || 1 == flag)
	{
		z = c;
		flag = 0;
	}

	return z;
}

void Browse(List *pHead)
{
	Page *pPage = GetPage(pHead, 10);
	TurnPage(pHead, pPage);
	free(pPage);
	pPage = NULL;
}

char *GetString()
{
	int size = 5;
	char *str = (char*)malloc(size);
	char c;
	int count = 0;
	char *newstr = NULL;
	char *pMark = str;

	while ((c = getchar()) != '\n')
	{
		*str = c;
		str++;
		count++;
		if (count + 1 == size)
		{
			*str = '\0';
			size += 5;
			newstr = (char*)malloc(size);
			strcpy_s(newstr, size, pMark);
			free(pMark);
			pMark = newstr;
			str = newstr + count;
		}
	}
	*str = '\0';

	return pMark;
}

List *GetNodeIn()
{
	List *pTemp = (List*)malloc(sizeof(List));
	pTemp->id = GetId();
	printf("����������:\n");
	pTemp->name = GetString();
	printf("������绰\n");
	pTemp->tel = GetString();
	pTemp->pNext = NULL;

	return pTemp;
}

void Query(List *pHead)
{
	char *str = NULL;
	List *pNewHead = NULL;
	List *pNewEnd = NULL;
	List *pTemp = NULL;
	List *pMark = pHead;
	List *pDel = NULL;

	while (1)
	{
		while (1)
		{
			printf("������ؼ���:\n");
			str = GetString();
			printf("aȷ��  ��������������:\n");
			if (GetKey() == 'a')
			{
				break;
			}
			else
			{
				free(str);
				str = NULL;
			}
		}

		//ƥ��
		pHead = pMark;
		while (pHead != NULL)
		{
			if (0 == strncmp(pHead->name, str, strlen(str)) ||
				0 == strncmp(pHead->tel, str, strlen(str)))
			{
				//����һ���ڵ�
				pTemp = (List*)malloc(sizeof(List));
				pTemp->id = pHead->id;
				pTemp->name = pHead->name;
				pTemp->tel = pHead->tel;
				pTemp->pNext = NULL;
				//��ӵ��µ�������
				AddNode(&pNewHead, &pNewEnd, pTemp);
			}
			pHead = pHead->pNext;
		}

		//���ò鿴ͨѶ¼  ����������ȥ
		Browse(pNewHead);

		//�����ѯ���
		while (pNewHead != NULL)
		{
			pDel = pNewHead;
			pNewHead = pNewHead->pNext;
			free(pDel);
			pDel = NULL;
		}

		pNewEnd = NULL;

		if ('b' == g_Key)
		{
			break;
		}
	}
}