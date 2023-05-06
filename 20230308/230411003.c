#include<stdio.h>

int main()
{
	int n,i,j,k=0,c,d=0,x=0,y=0,r;
	int arr[6][6] ={0};
	printf("Input n:");
	scanf("%d", &n);
	
	printf("Input array:\n");
	for (i = 0; i <n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			c = arr[i][j];
			for (k = 0; k < n; k++)
			{
				if (c > arr[i][k])
					y = k;
			}
			for (r = 0; r < n; r++)
			{
				if (c < arr[r][j])
					x = r;
			}
			if ((y == j) && (x == i))
			{
				printf("a[%d][%d]=%d", j, i,arr[j][i]);
				d = 1;

			}
		}
	}
	if(d==0)
		printf("NO");
	return 0;
}
