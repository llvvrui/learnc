#include <stdio.h>

int main(void)
{
    struct Test
    {
        unsigned int a:1;
        unsigned int b:1;
        unsigned int c:2;
    };

    struct Test test;
    test.a = 0;
    test.b = 1;
    test.c = 2;

    printf("a = %d, b = %d, c = %d\n", test.a, test.b, test.c);
    printf("size of test = %lu\n", sizeof(test));

    return 0;
}