#include<stdio.h>
#include<math.h>
int main()
{
    
    float ave, inter, mey, ye;
    scanf("%f %f %f", &mey, &ye, &ave);
    float z = pow((1.000 + ave), ye);
    inter = mey * z - mey;
    printf("Enter money,year and rate:interest=%.2f", inter);
    return 0;
}
