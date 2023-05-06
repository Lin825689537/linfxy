#include<stdio.h>

int strrindex(char* s, char* t)
{
	int i = 0, j = 0, count1 = 0, count2 = 0, b = 0,a=0;
	while (s[i] != '\0')
	{
		count1++;
		i++;
	}//计算s数组长度 
	while (t[j] != '\0')
	{
		count2++;
		j++;
	}//计算t数组长度 
	for (i = 0; i < count1; i++)
	{
		for (j = 0; j < count2; j++)
		{

			if (s[i+j] == t[j])//比较俩数组，比较长度为单词字母数 
				b++;//用于判断单词从第一个字母到最后一个字母是否都相同 
		}
		if (b == count2)
		{
			a = i ;//用于函数返回，返回此时单词的的下标数 
		}
		b = 0;//判断完成一个单词b归零判断下一个单词 
	}
	if (a != 0)
		return a;//有俩个相同单词都和数组t相同返回后一个单词下标 
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
