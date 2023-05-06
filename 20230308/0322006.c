#include<stdio.h>
int main()
{
	char x;
	int y=66;
	printf("Input Grade: ");
	scanf("%c", &x);
	if (x == 'A')
		y = 0;
	if (x == 'B')
		y = 1;
	if (x == 'C')
		y = 2;
	if (x == 'D')
		y = 3;
	if (x == 'E')
		y = 4;
	switch (y)
	{
	case 0 :
		printf("%c is 90~100\n",x);
		break;
	case 1:
		printf("%c is 80~89\n",x);
		break;
	case 2:
		printf("%c is 70~79\n",x);
		break;
	case 3:
		printf("%c is 60~69\n",x);
		break;
	case 4:
		printf("%c is 0~59\n",x);
		break;
	default:
		printf("errno\n");

	}
	return 0;
}
