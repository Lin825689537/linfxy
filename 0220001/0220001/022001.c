#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int sum(int m, int n)
//{
//    int summ = 0;
//    int count = 0;
//    if (n > m)
//    {
//        count = n - m;
//    }
//    else
//        printf("输入顺序有误\n");
//
//    int i = 0;
//    for (i = 0; i <= count; i++)
//    {
//        summ += m;
//        m++;
//
//    }
//    return summ;
//}
//
//int main()
//
//
//
//{
//    int m;
//    int n;
//    scanf("%d %d", &m, &n);
//
//    printf("%d", sum(m, n));
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	double r=0.00;
//	double h =0.00;
//	scanf("%lf %lf", &r, &h);
//	double c = 2 * r * 3.14;
//	double s = 3.14 * r * r;
//	double b_s = 4 * 3.14 * r * r;
//	double q_v =  3.14 * r * r * r * 4 / 3;
//	double z_v = 3.14 * r * r * h;
//	printf("圆周长: %.2lf\n", c);
//	printf("圆面积: %.2lf\n", s);
//	printf("圆球表面积: %.2lf\n", b_s);
//	printf("圆球体积: %.2lf\n", q_v);
//	printf("圆柱体积: %.2lf\n", z_v);
//	return 0;
//}
//#include<stdio.h>
////需要引入的文件
////如提示运行通过，但解题失败，认证对比预期输出和实际输出之间的差异
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d",& a,& b,& c);
//	if (a > b && a > c)
//	{
//		printf("%d\n", a);
//	}
//	else if (b > a && b > c)
//	{
//		printf("%d\n", b);
//	}
//	else if (c > a && c > b)
//	{
//		printf("%d\n", c);
//	}
//	return 0;
//}
//#include<stdio.h>
////需要引入的文件
////如提示运行通过，但解题失败，认证对比预期输出和实际输出之间的差异
//
//int main()
//{
//    //put your codes here.
//    int x = 0;
//    int a = 0;
//    scanf("%d %d", &x, &a);
//
//     long long z = 1;
//    int i = 0;
//    int ou = 0;
//    for (i = 0; i < a; i++)
//    {
//        z *= x;
//
//    }
//    ou = z % 1000;
//    printf("%d\n", ou);
//    return 0;
////}
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//
//    char str[30];
//    char men[30];
//    int m = 0;
//    scanf("%c", &str);
//    scanf("%d", &m);
//    strcpy(men, str+6);
//    printf("%c\n", men);
//
//



    // write your code here......

//
//    return 0;
//}
//#include<stdio.h>

//int main()
//{
//	float r, dia, cir, area;
//	scanf("%f", &r);
//	dia = r * 2;
//	cir = dia * 3.14159;
//	area = r * r * 3.14159;
//	printf("The diameter is %.2f\n", dia);
//	printf("The circumference is %.2f\n", cir);
//	printf("The area is %.2f\n", area);
//	printf("The diameter is %.2f\n", r);
//	return 0;
//
//}
#include<stdio.h>

//int main()
//{
//	int ma, en, co;
//	float  ave;
//	scanf("%d %d %d", &ma, &en, &co);
//	int add = ma + en + co;
//
//	ave = (add / 3.0);
//	printf("average=%.2f\n", ave);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    
//    float ave, inter, mey, ye;
//    scanf("%f %f %f", &mey, &ye, &ave);
//    float z = pow((1.000 + ave), ye);
//    inter = mey * z - mey;
//    printf("interret=%.2f", inter);
//    return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	char arr[6];
//	int i = 0;
//	scanf("%s", arr);
//	for (i= 0; i < 5; i++)
//	{
//		printf("%c   ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
////需要引入的文件
////如提示运行通过，但解题失败，认证对比预期输出和实际输出之间的差异
//int main()
//{
//    double pai = 0;
//    double a = 1;
//    int b = 2;
//    double c = 0;
//    int i = 1;
//    double jd = pow(10,-6);
//    double wh = 1;
//
//    do
//    {
//        a = (1.0/i)*pow(-1,b) ;
//        b++;
//        i = i + 2;
//        wh = 1.0 / i;
//        c = c + a;
//    } while (wh > jd);
//    pai = 4 * c;
//    printf("%.6lf\n", pai);
//    return 0;
//}
//#include<stdio.h>
////需要引入的文件
////如提示运行通过，但解题失败，认证对比预期输出和实际输出之间的差异
//
//int main()
//{
//    int age(int lo, int le);
//    int n, x;
//    double y = 0;
//    scanf("%d %d", &n, &x);
//
//    y = age(n, x);
//    printf("%.2lf", y);
//    //put your codes here.
//    return 0;
//}
//int age(int n, int x)
//{
//    if(n == 1)
//    {
//        return x;
//    }
//    if (n > 1)
//    {
//        double mu = 1;
//        mu = mu * x;
//        n--;
//        if (n >=1)
//        {
//       mu = mu* age(n, x);
//
//        }
//
//        return mu;
//    }
//}