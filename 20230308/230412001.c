#include<stdio.h>
int search(int* arr, int n, int x)
{
	int i = 0,b=0;
	for (i = 0; i < n; i++) 
	{
		if (x == arr[i])
		{
			return i;
			b++;
		}
	}
	if (b == 0)
		return -1;
}
int main()
{
	int n, x,i,b=0;
	int a[10] = { 0 };
	printf("Input n:");
	scanf("%d",& n);
	printf("Input %d integers:", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Input x:");
	scanf("%d", &x);
	b=search(a, n, x);
	if (b != (-1))
		printf("index = %d", b);
	else
		printf("Not found");
	return 0;
}
