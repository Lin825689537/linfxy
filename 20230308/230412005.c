#include<stdio.h>
int main()
{
	int x, y,a=0,i,b=1;
	int arr[20] = { 0 };
	scanf("%d", &x);
	if (x < 0)
	{
		x = x * (-1);
		b = 0;
	}
	y = x;
	while (y != 0)
	{
		y = y / 10;
		a++;
	}
	y = x;
	for (i = 0; i < a; i++)
	{
		arr[i] = y % 10;
		y = y / 10;
	}
	if (b == 0)
		printf("-");
	for (i = a-1; i >=0; i--)
	{
		if (arr[i] % 2 == 1)
		{
			printf("%d", arr[i]);
		}
	}
	return 0;
}
