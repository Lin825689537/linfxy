#include<stdio.h>
//需要引入的文件
//如提示运行通过，但解题失败，认证对比预期输出和实际输出之间的差异
int main()
{
  //put your codes here.
  char c1,c2;
  c1=getchar();
  c2 =getchar();
  putchar(':');
  putchar(c1);
  putchar(c2);
  putchar('\n');
  printf("用printf输出语句:%c%C\n",c1,c2);
  

  return 0;
}
