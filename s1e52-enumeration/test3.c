#include <stdio.h>

int main(void)
{
    enum Color {red, green, blue = 10, yellow};
    enum Color rgb;

    printf("red = %d\n", red);
    printf("green = %d\n", green);
    printf("blue = %d\n", blue);
    printf("yellow = %d\n", yellow);



    return 0;
}