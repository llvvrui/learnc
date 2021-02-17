#include <stdio.h>

int main()
{
    int a, b;

    printf("请输入两个数，中间以空格隔开！");
    scanf("%d %d", &a, &b);

    if (a != b)
    {
        if (a > b)
        {
            printf("%d > %d\n", a, b);
        }
        else
        {
            printf("%d < %d\n", a, b);
        }
    }
    else
    {
        printf("%d = %d\n", a, b);
    }
    
    return 0;
}