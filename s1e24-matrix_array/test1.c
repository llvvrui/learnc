#include <stdio.h>

int main()
{
    int array[4][5] = {0}; // *(array+1) == array[1]语法糖

    printf("sizeof int: %d\n", sizeof(int));
    printf("array: %p\n", array);
    printf("array + 1: %p\n", array + 1);

    return 0;
}