#include <stdio.h>

#define STR(s) # s

int main(void)
{
    printf("%s\n", STR(FISHC));

    return 0;
}