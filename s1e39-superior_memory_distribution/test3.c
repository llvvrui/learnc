#include <stdio.h>
#include <stdlib.h>

int *func(void); // 堆数据函数可以互相访问，但不建议这么做

int *func(void)
{
    int *ptr = NULL;

    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        exit(1);
    }

    *ptr = 520;

    return ptr;
}

int main(void)
{
    int *ptr = NULL;

    ptr = func();

    printf("%d\n", *ptr);
    free(ptr);

    return 0;
}