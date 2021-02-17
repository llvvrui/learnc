#include <stdio.h>

void func(void);

void func(void)
{
    static int count = 0; // count不会被释放，生存期和全局一样，作用域不变

    printf("count = %d\n", count);

    count++;
}

int main(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        func();
    }

    return 0;
}