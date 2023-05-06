#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
#include<string.h>
//声明一个名字为Student的数据类型
// your code
struct student
{
	int idd;
	char mane[10];
	float num;
};
int main() {
	struct student sts[5] =
	{
		{ 10101,"Zhang",78.0},
		{ 10103,"Wang",98.5},
		{ 10106,"Li",86.0},
		{ 10108,"Ling",73.5},
		{ 10110,"Fun",100.0}

	};
	int i;
	for (i = 0; i < 5; i++)
	{
		int j = 0;
		for (j = 0; j < 4 - i; j++)
		{
			if (sts[j].num < sts[j + 1].num)
			{

				struct student temp = sts[j];
				sts[j] = sts[j + 1];
				sts[j + 1] = temp;


			}
		}


	}
	for (i = 0; i < 5; i++)
	{
		printf("%d %s %.2f\n", sts[i].idd, sts[i].mane, sts[i].num);
	}
	return 0;

	//your code end
}