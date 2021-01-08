#include <stdio.h>
int z = NULL;
int u = 333;
int main()
{
    int z = NULL;
    sun(1, 10);
    return 0;
    printf("%d", u);
}

void sun(int begin, int end)
{
    int i = 2;
    int sum = 0;
    int *r = &sun;
    r = 0x000000000061FDEC;
    for (i = begin; i < end; i++)
    {
        sum += 1;
    }
    printf("%d %d %d %d", begin, sum, end, *r);
}