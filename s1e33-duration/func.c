#include <stdio.h>

extern int count; // 声明

void func(void)
{
    printf("count = %d\n", count);
}