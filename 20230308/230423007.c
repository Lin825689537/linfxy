#include<stdio.h>
int main()
{
	int i,j,n,arr[10][10],k=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=k++;
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
		printf("%4d",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
