#include <stdio.h>

#define integer int // have bug

int main(void)
{
    integer a;
    int b;

    a = 520;
    b = a;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("size of a = %lu\n", sizeof(a));

    return 0;
}