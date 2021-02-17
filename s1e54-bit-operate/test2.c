#include <stdio.h>

int main(void)
{
    int mask = 0xFF;
    int v1 = 0xABCDEF;
    int v2 = 0xABCDEF;
    int v3 = 0xABCDEF;

    v1 &= mask;
    v2 |= mask;
    v3 ^= mask;

    printf("v1 = 0x%X\n", v1);
    printf("v2 = 0x%X\n", v2);
    printf("v3 = 0x%X\n", v3);

    return 0;
}