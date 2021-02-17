#include <stdio.h>

int main(void)
{
    enum Color {red = 10, green, blue};
    enum Color rgb;

    for (rgb = red; rgb <=blue; rgb++)
    {
        printf("rgb is %d\n", rgb);
    }

    return 0;
}