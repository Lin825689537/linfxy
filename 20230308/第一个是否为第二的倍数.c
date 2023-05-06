#include<stdio.h>
int main ()
{
	int x ,y,n;
	scanf("%d %d",&x,&y);
	n = x%y;
	if(n ==0)
	printf("%d is a multiple of %d",x,y);
	else
	printf("%d is not a multiple of %d",x,y) ;
	return 0;
}
