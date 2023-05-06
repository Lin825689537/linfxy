#include<stdio.h>
int main()
{
	int arr[6][6] = { 0 }, b[6] = {0};
	int i,j,k=0,n,flg = 0;
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
	//假定每一行最大的一个数是第一个把的一个的数给b[i];
	for (i = 0; i < n; i++)
		b[i] = arr[i][0];

	//找出每一行中最大的数，把他的列值给b[i];
	//如果某一行中有多个最大值则把-1给b[i];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (b[i] < arr[i][j])
			{
				b[i] = arr[i][j];
				k = j;
			}
		}
		for (j = 0; j < n; j++)
		{
			if (b[i] == arr[i][j] && j != k)
				b[i] = -1;
		}
		if (b[i] != -1)
			b[i] = k;

	}
	//找出仅有一个最大值的那一列中是不是该列中的最小值；
	for (i = 0; i < n; i++)
	{
		if (b[i] != -1)
		{
			for (j = 0; j < n; j++)
			{
				if (b[i] > arr[j][i])
				{
					b[i] = -1;
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (b[i] != -1)
		{
			printf("a[%d][%d]=%d", i, b[i], arr[i][b[i]]);
			flg = 1;
		}
	}
	if (flg == 0)
		printf("NO");
	return 0;
}
