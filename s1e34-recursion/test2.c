#include <stdio.h>

long fact(int num);

long fact(int num)
{
    long result;

    for (result = 1; num > 1; num--)
    {
        result *= num;
    }

    return result;
}

int main(void)
{
    int num;

    printf("请输入一个正整数：");
    scanf("%d", &num);

    printf("%d的阶乘是：%ld\n", num, fact(num));

    return 0;
}