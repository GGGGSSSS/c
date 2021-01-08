#include <stdio.h>
#include <stdlib.h>
void main()
{
  char str[12] = "Sunshine";
  puts(str);
  char c = '\0';
  char null = NULL;
  for (int a = 0; a < 12; a++)
  {
    printf("%c\n", str[a]);
  }
  printf("数组长度为%d\n", sizeof(str));
  printf("c输出得：%d\n", (int)c);
  printf("null输出得：%d\n", (int)null);
  system("pause");
}