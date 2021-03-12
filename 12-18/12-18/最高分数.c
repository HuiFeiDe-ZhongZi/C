#include<stdio.h>

int main()
{
	int i = 0;
	int score[3] = { 0 };
	while (~scanf_s("%d" "%d" "%d", &score[0], &score[1], &score[2]))
	{
		
		int i = 0;
		int max = 0;
		for (i = 0; i < 3; i++)
		{
			if (score[i] > max)
				max = score[i];
		}
		printf("max=%d\n", max);
	}

	return 0;
}