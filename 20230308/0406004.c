#include<stdio.h>
#include<math.h>
int main()
{
	double x, y, b;
	scanf("%lf %lf", &x, &y);
	b = sqrt(x * x + y * y * 2);
	printf("%.2lf", b);
	return 0;

}
