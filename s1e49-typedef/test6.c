#include <stdio.h>

typedef int INTEGER;
#define PTRINT int*

int main(void)
{
    INTEGER a = 520;
    PTRINT b, c; // have bug

    b = &a;
    c = b;

    printf("addr of a = %p\n", c);

    return 0;
}