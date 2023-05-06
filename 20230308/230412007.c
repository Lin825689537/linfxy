#include<stdio.h>
int main()
{
	int n, m,i,j;
	scanf("%d %d", &n, &m);
	int arr[10][20] = {0};
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < m; i++)
		{
			scanf("%d", &arr[j][i]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%4d", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
