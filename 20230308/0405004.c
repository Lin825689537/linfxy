#include<stdio.h>
int main()
{
	int i;
	int arr[5] = { 0 };
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	for (i = 0; i < 5; i++)
	{
		int j;
		for (j = 0; j < arr[i]; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
