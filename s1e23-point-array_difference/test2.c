#include <stdio.h>

int main()
{
    // 指针数组：指针数组是一个数组，每个数组元素存放一个指针变量。
    // []优先结合，*号再结合
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int *p1[5] = {&a, &b, &c, &d, &e};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *p1[i]);
    }

    return 0;
}