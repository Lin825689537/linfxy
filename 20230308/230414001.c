#include<stdio.h>
int main()
{
	int arr[6][6] = { 0 }, b[6] = {0};
	int i,j,k=0,n,flg = 0;
	printf("Input n:");
	scanf("%d", &n);
	printf("Input array:\n");
	for (i = 0; i < n; i++)//�������ֵ
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//�ٶ�ÿһ������һ�����ǵ�һ���ѵ�һ��������b[i];
	for (i = 0; i < n; i++)
		b[i] = arr[i][0];

	//�ҳ�ÿһ��������������������ֵ��b[i];
	//���ĳһ�����ж�����ֵ���-1��b[i];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (b[i] < arr[i][j])
			{
				b[i] = arr[i][j];
				k = j;
			}
		}
		for (j = 0; j < n; j++)
		{
			if (b[i] == arr[i][j] && j != k)
				b[i] = -1;
		}
		if (b[i] != -1)
			b[i] = k;

	}
	//�ҳ�����һ�����ֵ����һ�����ǲ��Ǹ����е���Сֵ��
	for (i = 0; i < n; i++)
	{
		if (b[i] != -1)
		{
			for (j = 0; j < n; j++)
			{
				if (b[i] > arr[j][i])
				{
					b[i] = -1;
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (b[i] != -1)
		{
			printf("a[%d][%d]=%d", i, b[i], arr[i][b[i]]);
			flg = 1;
		}
	}
	if (flg == 0)
		printf("NO");
	return 0;
}
