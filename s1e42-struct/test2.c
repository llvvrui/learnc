#include <stdio.h>

int main(void)
{
    struct A // 内存对齐，一般系数是4
    {
        char a;
        char c;
        int b;
    } a = {'X', '0', 520};

    printf("size if a = %lu\n", sizeof(a));

    return 0;
}