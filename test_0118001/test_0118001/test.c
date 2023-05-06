#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct stu {
	char name[10];
	char gender;
	int score;
}STU;
void f(char name[10], char gender, int score)
{
	strcpy(name, "Sun");
	gender = 'm';
	score = 370;
}
int main()
{
	STU b = { "zhao",'m',290 },
		a = { "Qian",'f',350 };
	b = a;
	printf("%s,%c,%d,", b.name, b.gender, b.score);
	f(b.name, b.gender, b.score);
	printf("%s,%c,%d\n", b.name, b.gender, b.score);
}