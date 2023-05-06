#include<stdio.h>
int main()
{
	int n, m, i,count,sum;
	printf("Input m: ");
	scanf("%d", &m);
	printf("Input n: ");
	scanf("%d", &n);
	if (m <=2)
	{
	  count = 1, sum = 2;
	}
	if (m > 2)
	{
       count = 0, sum = 0;
	}
	for (i = m; i <= n; i++)
	{
		int j = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
			if (j == i - 1)
			{
				sum += i;
				count++;

			}
		}
	}
	printf("count=%d, sum=%d", count, sum);

	return 0;
}
