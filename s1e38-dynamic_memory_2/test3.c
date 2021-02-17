#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int *ptr1 = NULL;
    int *ptr2 = NULL;

    ptr1 = (int *)malloc(10 * sizeof(int));

    ptr2 = (int *)malloc(20 * sizeof(int));

    memcpy(ptr2, ptr1, 10);
    free(ptr1);

    free(ptr2);

    return 0;
}