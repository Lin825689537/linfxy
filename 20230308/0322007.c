#include<stdio.h>
int main()
{
	double x;
	scanf("%lf", &x);
	if (x >= -10 && x <= 4)
	{
		if ((x - 2) < 0)
			printf("y=%.2lf\n", (2 - x));
		else
			printf("y=%.2lf\n", (x - 2));
	}
	else if (x >= 5 && x <= 7)
		printf("y=%.2lf\n", (x + 10));
	 else if (x >= 8 && x <= 12)
		printf("y=%.2lf\n", (x * x * x * x));
	else
		printf("No answer.\n");
		return 0;
}
