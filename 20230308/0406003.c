#include<stdio.h>
#include<math.h>
int main()
{
	double x, y, b;
	scanf("%lf %lf", &x, &b);
	y = sqrt(fabs(x))+b;
	printf("%.2lf", y);
	return 0;

}
