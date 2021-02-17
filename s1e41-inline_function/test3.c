#include <stdio.h>

inline int square(int x); // 内联函数，加快运算，加-O编译 -> gcc test3.c -O && ./a.out 

inline int square(int x)
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