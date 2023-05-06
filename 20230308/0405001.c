#include<stdio.h>
int main()
{
	int n, m,i;
	scanf("%d %d", &m, &n);
	if (m < n)
	{
		for (i = m; i <= n; i++)
			printf("%d\n", i);

	}
	else
	{
		for (i = m; i >= n; i--)
			printf("%d\n", i);

	}

	return 0;
}
