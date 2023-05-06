#include<stdio.h>
int main()
{
	int arr[10] = { 0 },i, x=1, y=1;
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	for(i=0;i<10;i++)
	{
		if(x<arr[i])
		x=arr[i];
	}
	for(i=0;i<10;i++)
	{
		if(y>arr[i])
		y=arr[i];
	}
	printf("Maximum value is %d\n", x);
	printf("Minimum value is %d\n",y);
	return 0;
}
