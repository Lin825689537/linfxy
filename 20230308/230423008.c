#include<stdio.h>
int main()
{
	char a[80];
	int i=0,b=0;
	printf("Input a string:");
	gets(a);
	printf("After replaced:");
	while(a[i] !='\0')
	{
		i++;
		b++;
	}
	for(i=0;i<b;i++)
	{
		if((a[i]>='A')&&(a[i]<='Z'))	
		a[i]='A'-(a[i]-'Z');

	}
	for(i=0;i<b;i++)
	printf("%c",a[i]);
	return 0;
}
