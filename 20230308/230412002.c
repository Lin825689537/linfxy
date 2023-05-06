#include<stdio.h>
int main()
{
	long x,a;
	int arr[5];
	int i;
	scanf("%ld", &x);
	a = x;
	for (i = 0; i < 5; i++)
	{
		arr[i] = a % 10;
		a = a / 10;
	}
	if ((arr[0] == arr[4]) && (arr[1] == arr[3]))
		printf("this number is a huiwen");
	else
		printf("this number is not a huiwen");
	return 0;
}
