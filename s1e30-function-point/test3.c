#include <stdio.h>

int square(int);

int square(int num)
{
    return num * num;
}

int main()
{
    int num;
    int (*fp)(int);

    printf("请输入一个整数：");
    scanf("%d", &num);

    fp = square; // 函数名相当于函数的地址 -> &square

    printf("%d * %d = %d\n", num, num, (*fp)(num)); // fp(num)

    return 0;
}