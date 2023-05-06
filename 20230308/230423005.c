#include<stdio.h>
int main()
{
	int n,arr[1000],i,num=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		num=num+arr[i];
	}
	printf("Total of array element values is %d",num);
	return 0;
}
