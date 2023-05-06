#include<stdio.h>
int main()
{
	double ave, num = 0;
	int sum = 0, stu = 0;
	printf("Enter grade, -1 to end:\n");
	scanf("%d", &stu);
	while (stu != -1)
	{
		sum += stu;
		printf("Enter grade, -1 to end:\n");
		scanf("%d", &stu);
		num++;
	}
	ave = sum / num/1.0;
	printf("Class average is %.2lf\n", ave);
	return 0;
}
