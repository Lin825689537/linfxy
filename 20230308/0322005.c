#include<stdio.h>
int main()
{
	double x;
	scanf("%lf", &x);
	if (x <= 1.0e-6     )
		printf("0.00\n");
	 else if ( x <= 10.0)
		printf("%.2lf\n", x);
	else if (x <= 20)
		printf("10.00");
	else if (x <= 40)
		printf("%.2lf\n", (20 - 0.5 * x));
	else
		printf("%.2lf\n", (x - 40));

	return 0;

}
