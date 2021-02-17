#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr1 = NULL;
    int *ptr2 = NULL;

    ptr1 = (int *)malloc(sizeof(int));
    ptr2 = (int *)malloc(sizeof(int));

    printf("stack: %p -> %p\n", &ptr1, &ptr2); // 栈 -> 从高往低
    printf("heap: %p -> %p\n", ptr1, ptr2); // 堆 -> 从低往高

    ptr1 = (int *)realloc(ptr1, 20 * sizeof(int));
    printf("heap: %p -> %p\n", ptr1, ptr2); 

    return 0;
}