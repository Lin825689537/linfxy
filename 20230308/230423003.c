#include<stdio.h>
int main()
{
	int n,arr[10],i,j,b;
	printf("Input n: ");
	scanf("%d",&n);
	printf("Input %d integers: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for (i=n ; i >0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				b = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = b;
			}
		}
	}
	printf("After sorted: ");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	return 0;
}
