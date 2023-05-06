#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Input integers: ");
	scanf("%d ", &n);
		while (n > 0)
		{
			if (n % 2 == 1)
				sum += n;
			scanf("%d ", &n);

	     }
		printf("The sum of the odd numbers is %d", sum);
	return 0;
}
