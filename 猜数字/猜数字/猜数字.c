#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include <time.h>



void menu()
{
	printf("*************************************\n");
	printf("******  1.play     0.exit      ******\n");
	printf("*************************************\n");
}
    
void game()
{
	
	int ret = rand(RAND_MAX) % 100 + 1;
	int num = 0;
   
	while (1)
	{   
		printf("������ַ�Χ1-100\n");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("�´���\n");

		}
		else if (num < ret)
		{
			printf("��С��\n");
		}
		else 
		{
			printf("�¶���\n");
			break;

		}

	//printf("%d\n", ret);
	}	
	
};
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do {
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�������\n");
				break;
		}
		

	}while (input);

	return 0;
}