#include<stdio.h>
int main()
{
	int n,i;
	int a[100]={0};
	scanf("%d",&n);
	printf("Element        Value\n");
	for(i=0;i<n;i++)
	printf("%7d%13d\n",i,a[i]);
	return 0;
}
