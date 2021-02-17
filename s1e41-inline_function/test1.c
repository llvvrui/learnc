#include <stdio.h>

int square(int x);

int square(int x)
{
    return x * x;
}

int main(void)
{
    int i = 1;

    while (i <= 100)
    {
        printf("%d 的平方是%d\n", i, square(i++));
    }
}