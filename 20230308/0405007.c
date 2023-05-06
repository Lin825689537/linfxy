#include<stdio.h>
int main()
{
	int k, i, count=0,sum = 0;
	scanf("%d", &k);
	i = k;
		while (count < 10)
		{
			
			if ((i % 13 == 0) || (i % 17 == 0))
			{
				sum += i;
				count++;
			}
			i--;
			
		}
		printf("%d\n", sum);
	return 0;
}
