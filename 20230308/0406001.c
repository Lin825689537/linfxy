#include<stdio.h>
int main()
{
	double x, y, z, sur, vol;
	printf("Input length, width and height of the cuboid: \n");
	scanf("%lf %lf %lf", &x, &y, &z);
	sur = (x * y + x * z + y * z) * 2;
	vol = x * y * z;
	printf("Surface area of the cuboid is: %.2lf\n", sur);
	printf("Volume of the cuboid is: %.2lf\n", vol);
	return 0;
}
