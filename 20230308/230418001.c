#include<stdio.h>
#include<math.h>
int main()
{
	int i = 1;
	double PI = 0, a = 1, b, sign = 1.0;
	b = 1e-6;
	do
	{
		
		PI = PI + a;
		i += 2;
		sign = -sign;
		a = (1.0 / i) * sign;
		
	} while (fabs(a) >= b);
	PI = PI + a-1e-7;
	PI = PI * 4;
	printf("pi=%lf  ",  PI);
	
	return 0;
}
