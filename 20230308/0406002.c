#include<stdio.h>
int main()
{
	double r, vol, PI = 3.1415926;
	scanf("%lf", &r);
	vol = PI * r * r * r * 4 / 3;
	printf("%.2lf", vol);
	return 0;
}
