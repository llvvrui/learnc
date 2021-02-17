#include <stdio.h>

int main(void) // 块作用域
{
    int i = 100; 
    {
        int i = 110;
        {
            int i = 120;
            printf("i = %d\n", i);
        }
        {
            printf("i = %d\n", i); // 110
            int i = 130;
            printf("i = %d\n", i);
        }
        printf("i = %d\n", i);
    }
    printf("i = %d\n", i);

    return 0;
}