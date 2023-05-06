#include<stdio.h>
int main ()
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(x>y)
	
		printf("%d is larger\n",x);
	if(x<y) 
	    printf("%d is larger\n",y);
	if(x ==y)
	printf("These numbers are equal\n");
	return 0;
}
