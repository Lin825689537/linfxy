#include<stdio.h>
int main()
{
	int n, m, i,pra = 1, prb = 1;
	scanf("%d,%d", &n, &m);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			pra = 0;
	}
	for (i = 2; i < m; i++)
	{
		if (m % i == 0)
			prb = 0;
	}
	if (pra == 1)
		printf("Yes,");
	else
		printf("No,");
	if(prb==1)
		printf(" Yes");
	else
		printf(" No");

	return 0;
}
