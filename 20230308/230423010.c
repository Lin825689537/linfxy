#include<stdio.h>
#include<malloc.h>
void sort(int* a, int n)
{
	int i, j, b;
	for (i = 0; i <n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (a[j] < a[i])
			{
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
}
int main()
{
	int  n, i;
	printf("Input n:");
	scanf("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);
		printf("Input array of %d integers:", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, n);
	printf("After sorted the array is:");
	for (i = 0; i <n; i++) 
		printf("%d ", a[i]);
	free(a);
	a = NULL;

	return 0;
}
