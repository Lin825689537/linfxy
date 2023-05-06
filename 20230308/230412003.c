#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i,a,b=0,j;
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < 10; i++)
	{
		a = 0;
		for (j = 0; j < 10; j++) 
		{
			if (arr[i] == arr[j])
				a++;
		}
		if (a == 1)
		{
			printf("%d ", arr[i]);
			b++;
		}
	}
	if (b == 0)
		printf("None");
	return 0;
}
