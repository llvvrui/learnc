#include <stdio.h>

int sum(int n);

int sum(int n)
{
    int result = 0;

    do 
    {
        result += n;
        printf("n: %d\n", n);
    } while (n-- > 0);

    return result; 
}

int main()
{
    int n;

    printf("请输入n的值：");
    scanf("%d", &n);

    printf("1+2+3+...+(n-1)的结果是：%d\n", sum(n));
}