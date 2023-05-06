#include<stdio.h>
int main()
{
	int year, mon;
	//printf("input year and month:");
	scanf("%d %d", &year, &mon);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (mon == 1)
			printf("31\n");
		if (mon == 2)
			printf("29\n");
		if (mon == 3)
			printf("31\n");
		if (mon == 4)
			printf("30\n");
		if (mon == 5)
			printf("31\n");
		if (mon == 6)
			printf("30\n");
		if (mon == 7)
			printf("31\n");
		if (mon == 8)
			printf("31\n");
		if (mon == 9)
			printf("30\n");
		if (mon == 10)
			printf("31\n");
		if (mon == 11)
			printf("30\n");
		if (mon == 12)
			printf("31\n");
	}
	if ((year % 4 != 0 || year % 100 == 0) && (year % 400 != 0))
	{
		if (mon == 1)
			printf("31\n");
		if (mon == 2)
			printf("28\n");
		if (mon == 3)
			printf("31\n");
		if (mon == 4)
			printf("30\n");
		if (mon == 5)
			printf("31\n");
		if (mon == 6)
			printf("30\n");
		if (mon == 7)
			printf("31\n");
		if (mon == 8)
			printf("31\n");
		if (mon == 9)
			printf("30\n");
		if (mon == 10)
			printf("31\n");
		if (mon == 11)
			printf("30\n");
		if (mon == 12)
			printf("31\n");

	}
	return 0;
}
