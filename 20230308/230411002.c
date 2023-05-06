#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	unsigned long x,y;
	int a=0,b,i,j;
	scanf("%ld", &x);
	y = x ;
	 while (y != 0)
	{   
			
			 a++;
			 y = y / 10;

	
	};
	 y = x;
	 int arr[10] = { 0 };
		 for (i = 0; i < a; i++)
		 {
			 arr[i] = (y % 10);
			 y = y / 10;
		 }
		 for (i = 0; i < a; i++)
		 {
			 for (j = 0; j < a-i; j++)
			 {
				 if (arr[j] < arr[j + 1])
				 {
					 b = arr[j + 1];
					 arr[j + 1] = arr[j];
					 arr[j] = b;
				 }
			 }
		 }
		 for (i = 0; i < a; i++)
			 printf("%d", arr[i]);
		 printf(" ");
		 b = 0;
		 for (i = a; i >0; i--)
		 {
			 if (arr[i] == 0)
				 b++;
		 }
		 for (i = a - b; i >= 0; i--)
			 printf("%d", arr[i]);
		 
	 
	
	
	return 0;
}
