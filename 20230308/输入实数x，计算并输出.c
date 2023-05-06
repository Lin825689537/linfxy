#include <stdio.h>
int main( )
{
    double x =0.0,y=0.0;
       
    printf("Enter x: ");
    scanf("%lf", &x);
    if(x ==10){
        y =1.0 /x;
    }
    else {
        y =x;
    }
    printf("f(%.1lf) = %.1lf\n" ,x,y );
    return 0;
}
