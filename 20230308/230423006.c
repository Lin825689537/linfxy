#include<stdio.h>

int strrindex(char* s, char* t)
{
	int i = 0, j = 0, count1 = 0, count2 = 0, b = 0,a=0;
	while (s[i] != '\0')
	{
		count1++;
		i++;
	}//����s���鳤�� 
	while (t[j] != '\0')
	{
		count2++;
		j++;
	}//����t���鳤�� 
	for (i = 0; i < count1; i++)
	{
		for (j = 0; j < count2; j++)
		{

			if (s[i+j] == t[j])//�Ƚ������飬�Ƚϳ���Ϊ������ĸ�� 
				b++;//�����жϵ��ʴӵ�һ����ĸ�����һ����ĸ�Ƿ���ͬ 
		}
		if (b == count2)
		{
			a = i ;//���ں������أ����ش�ʱ���ʵĵ��±��� 
		}
		b = 0;//�ж����һ������b�����ж���һ������ 
	}
	if (a != 0)
		return a;//��������ͬ���ʶ�������t��ͬ���غ�һ�������±� 
	if (a == 0)
		return -1;
}
int main()
{
	char s[100], t[10];
	int i = 0;
	gets(s);
	gets(t);
	i = strrindex(s, t);
	if (i > 0)
		printf("%d", i);

	return 0;
}
