#include <stdio.h>

int main()
{
    int a;
    int *p = &a;

    printf("请输入一个数：");
    scanf("%d", &a);
    printf("a = %d\n", a);

    printf("请重新输入一个数：");
    scanf("%d", p);
    printf("a = %d\n", a);

    return 0;
}