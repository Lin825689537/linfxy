#include<stdio.h>
int main ()
{
	double sal, tax, rate;
	printf("Enter the salary: ");
	scanf("%lf", &sal);
	if (sal <= 850)
		rate = 0;
	else if (sal <= 1350)
		rate = 0.05;
	else if (sal <= 2850)
		rate = 0.1;
	else if (sal <= 5850)
		rate = 0.15;
	else
		rate = 0.2;
	tax = rate * (sal - 850);
	printf("tax=%.2lf", tax);
	return 0;
}
