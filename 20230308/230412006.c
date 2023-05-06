#include<stdio.h>
int main()
{
	int n,i,mun=0;
	int arr[1000] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	
		mun += arr[i];
	printf("Total of array element values is %d", mun);
	return 0;
}
