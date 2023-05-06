#include<stdio.h>
int main()
{
	int num, f1, f2, f5, i, n, a,b,count=0;
	printf("Input money: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		n = num - 5 * i;
		if (n > 0)
		{
			f5 = i;
			for (int j = num; j >0; j--)
			{
				a = num-5*i - 2 * j;
				if (a > 0)
				{
					f2 = j;
					for (int k = 1; k < num; k++)
					{
						b = num - 5 * i - 2 * j - k;
						if (b >= 0)
						{
							f1 = b+k;
							count++;
							printf("fen5: %d fen2: %d fen1: %d\n", f5, f2, f1);

							break;
						}
					}
					

				}
			}

		}
	}
	printf("count=%d", count);
	return 0;
}
