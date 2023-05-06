#include<stdio.h>

int main()
{
	char arr[6];
	int i = 0;
	scanf("%s", arr);
	for (i= 0; i < 5; i++)
	{
		printf("%c   ", arr[i]);
	}
	printf("\n");
	return 0;
}

