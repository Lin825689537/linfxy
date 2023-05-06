#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test()
{
	printf("********************************\n");
	printf("****    1.Add     2.Sub     ****\n");
	printf("****    3.Mul     4.DIv     ****\n");
	printf("****        0.exit          ****\n");
	printf("********************************\n");
}
int Add(int x,int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;


	int (*pfarr[])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		test();
			printf("请选择运算选项>;\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个运算数>;\n");
			scanf("%d%d", &x, &y);
			int ret = pfarr[input](x, y);
			printf("%d \n", ret);

		}
		else if (input == 0)
		{
			printf("退出程序\n");
		}
		else
		{
			printf("输入错误重新输入\n");
		}
	} while (input);
		return 0;

}