#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("分配内存失败！\n");
        exit(1);
    }

    printf("请输入一个整数：");
    scanf("%d", ptr);

    printf("您输入的整数是：%d\n", *ptr);
    free(ptr);
    
    return 0;
}