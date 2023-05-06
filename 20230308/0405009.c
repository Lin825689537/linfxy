#include<stdio.h>
int main()
{
	int sby, a, b, d, e;
	scanf("%d", &sby);
	a = sby % 10;
	sby = sby / 10;
	b = sby % 10;
	sby = sby / 100;
	d = sby % 10;
	sby = sby / 10;
	e = sby % 10;
	if ((a == e) && (b == d))
		printf("this number is a huiwen");
	else
		printf("this number is not a huiwen");

	return 0;
}
