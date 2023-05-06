#include<stdio.h>
int main()
{
	int fib[10]={0};
	int i=0;
	fib[0]=1;
	fib[1]=1;
	for(i=2;i<10;i++)
		fib[i]=fib[i-1]+fib[i-2];
	for(i=0;i<10;i++)
	{
	printf("%d",fib[i]);
	if(i<9)
	printf(",");
	}
	return 0;
 } 
