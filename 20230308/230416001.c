#include<stdio.h>
int main()
{
	int arr[6][6] = { 0 }, max=0, min=0;
	int i, j, k = 0, n, c=0, d=0;
	printf("Input n:");
	scanf("%d", &n);
	printf("Input array:\n");
	for (i = 0; i < n; i++)//输数组的值
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}


	for (i = 0; i < n; i++)
	{
		max = arr[i][0];
		for (j = 0; j < n; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				c = j;
			}
		}
		min = arr[0][c];
		for (j = 0; j < n; j++)
		{
			if (min > arr[j][c])
			{
				min = arr[j][c];
				d = j;
			}
		}
		if (max == min)
		{
			printf("a[%d][%d]=%d", d, c, arr[d][c]);
			break;
		}
	}
	if (max != min)
		printf("NO");
	return 0;
}
