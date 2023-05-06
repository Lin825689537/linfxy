#include<stdio.h>
int main()
{
	int i, arr[10] = { 0 };
	arr[0] = 1;
	arr[1] = 1;
	for (i = 2; i <= 9; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (i = 0; i <= 9; i++)
		printf("%d ", arr[i]);
	return 0;
}
