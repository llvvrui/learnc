#include <stdio.h>

#define STR(s) # s //# 变成字符串

int main(void)
{
    printf(STR(Hello    %s num = %d\n), STR(FishC), 520);

    return 0;
}