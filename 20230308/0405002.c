#include<stdio.h>
int main()
{
	int m = 0, n = 0, a = 1, b = 1, c = 1, d, sum,i;
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		a = a * i;
	for (i = 1; i <= m; i++)
		b = b * i;
	d = n - m;
	for (i = 1; i <= d; i++)
		c = c * i;
	sum = a / (b * c);
	printf("result=%d\n", sum);



	return 0;
}
