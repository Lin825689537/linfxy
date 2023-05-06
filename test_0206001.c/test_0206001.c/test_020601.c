
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int jiechen(int n)
{
    int i = 0;
    int pro = 1;
    for (i = 1; i <= n; i++)
    {
        pro = pro * i;
    }
    int re = 0;
    int add = 0;
    while (pro % 10 == 0)
    {
        if (pro % 10 == 0)
        {
            add++;
            pro = pro / 10;
        }
    }

    return add;


}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int tem = 0;
    int re = 0;
    re = jiechen(n);
    printf("%d\n", re);



    return 0;
}
