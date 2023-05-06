#include<stdio.h>
int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if ((a + b) > c && (a + c) > b && (b + c) > b)
	{
		if ((a == b&&a!=c )|| (a == c &&a!=b )||( b == c &&a!=b))
			printf("isoceles triangle\n");
		else if (a == b && a == c)
			printf("equilateral triangle\n");
		else if (((a * a + b * b) == c * c) || ((a * a + c * c) == b * b) || ((b * b + c * c) == a * a))
			printf("right-angled triangle\n");
		else
			printf("arbitrary triangle");
	}
	else printf("It isn't triangle.\n");
	return 0;
}
