#include<stdio.h>

int main()
{
	int ma, en, co;
	float  ave;
	scanf("%d %d %d", &ma, &en, &co);
	
	int add = ma + en + co;

	ave = (add / 3.0);
	printf("math=eng=comp=average=%.2f\n", ave);
	return 0;
}
