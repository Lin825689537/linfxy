#include<stdio.h>

int main()
{
    int x,y,count=0,i;
    int a[100]={0},z=0;
    printf("x = ");
    scanf("%d",&x);
    if(x<0)
    {
        printf("false");
    return 0;
    }
	y=x;
    while(y>0)
    {
        y=y/10;
        count++;
    }
	y=x;
    for( i=0;i<count;i++)
    { 
           a[i]=y%10;
           y=y/10;
       
    }
       for(i=0;i<count;i++)
       {
           if(a[i]!=a[count-1-i])
          {
		  printf("false");
           z=1;
           break;
          }

       }
       if(z==0)
            printf("true");
    
    return 0;
}
