#include <stdio.h>

int main()
{
    int a = 3, b = 3;

    (a = 0) && (b = 5);
    printf("a = %d, b = %d\n", a, b); //短路求职

    (a = 1) || (b = 5);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}