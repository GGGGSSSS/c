#include <stdio.h>

int main()
{
    sun(1, 10);
    return 0;
}

void sun(int begin, int end)
{
    int i;
    int sum = 0;
    for (i = begin; i < end; i++)
    {
        sum += 1;
    }
    printf("%d %d %d", begin, sum, end);
}