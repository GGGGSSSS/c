#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x = 1;
  int *a = (int *)malloc(5 * sizeof(int));
  printf("%d, ", sizeof(x)); // 1
  if (1)
  {
    x = 2;
    printf("%d, ", x); // 2
  }
  printf("%d\n", x); // 1
  free(a);
}