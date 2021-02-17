#include <stdio.h>

int main()
{
    // 数组指针是一个指针，它指向的是一个数组
    int temp[5] = {1, 2, 3, 4, 5};
    int(*p2)[5] = &temp;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(*p2 + i));
    }

    return 0;
}