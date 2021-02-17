#include <stdio.h>

int main()
{
    int num = 520;
    const int cnum = 880;
    const int * const p = &cnum;

    // *p = 1024;
    // printf("*p: %d\n", *p);

    // p = &cunm;
    // printf("*p: %d\n", *p);

    return 0;
}