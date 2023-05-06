#include<stdio.h>
int main()
{
	int arr[10][20];
	int i ,j,m,n;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&arr[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%4d",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
