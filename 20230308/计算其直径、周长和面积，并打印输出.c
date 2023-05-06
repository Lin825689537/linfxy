#include<stdio.h>

int main ()
{
	float r , dia,cir,area;
	scanf("%f",&r);
	dia = r*2;
	cir = dia*3.14159;
	area= r*r*3.14159;
	printf("The diameter is %.2f\n",dia);
	printf("The circumference is %.2f\n",cir);
	printf("The area is %.2f\n",area);
	
	return 0;
	
 } 
