#include <stdio.h>

int main(void)
{
    struct Test
    {
        int x;
        int y;
        struct Test *test;
    };

    return 0;
}