#include <stdio.h>

int main()
{
  int a = 10;
  int b = 20;
  swap(a, b);
  printf("%d %d,", a, b);
}

void swap(int a, int b)
{
  printf("%d %d,", a, b);
  int temp = a;
  a = b;
  b = temp;
  printf("%d %d,", a, b);
}