#include <stdio.h>

int main(void)
{
    int value = 1;

    while (value < 1024)
    {
        value <<= 1; //1-> 2^1, 2->2^2 ... n -> 2^n]uu
        printf("value = %d\n", value);
    }
    printf("\n=========分隔符========\n\n");

    value = 1024;

    while(value > 0)
    {
        value >>= 2;
        printf("value = %d\n", value);
    }

    return 0;
}