#include <stdio.h>

int main(void)
{
    char a = 0, b = 0;
    printf("%p\n%p\n", &a, &b);
    int *p = (int *)&b;
    printf("%p\n", p);

    *p = 258;
    printf("%d %d\n", a, b);

    return 0;
}