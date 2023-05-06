#include<stdio.h>
int main()
{
	char a[10] = { 0 };
	int count=0,i;
	scanf("%s", a);
	for (i = 0; i < 10; i++)
	{
		if (a[i] != '\0')
			count++;
		if(a[i]=='\0')
		break;
	}
	for (i = 0; i < count; i++)
	{
		if (a[i] > 'z' - 4)
			a[i] = a[i] -22;
		else if ((a[i] < 'z' - 4) && a[i] >= 'a')
			a[i] = a[i] + 4;
		printf("%c\n", a[i]);
	}
	
	return 0;
}
