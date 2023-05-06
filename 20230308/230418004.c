#include<stdio.h>
int main()
{
	int i, j, count=0;
	for (i = 101; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			printf("%d ",i);
			count++;
		}
		if (count == 10)
		{
			printf("\n");
			count = 0;
		}

	}

		return 0;
}
