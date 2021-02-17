#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = NULL;
    int num, i;

    printf("请输入带录入的整数的个数：");
    scanf("%d", &num);

    ptr = (int *)malloc(num * sizeof(int));

    for (i = 0; i < num; i++)
    {
        printf("请录入第%d个整数：", i + 1);
        scanf("%d", &ptr[i]);
    }

    printf("你录入的整数是：");
    for (i = 0; i < num; i++)
    {
        printf("%d ", ptr[i]);
    }

    putchar('\n');
    free(ptr);

    return 0;
}