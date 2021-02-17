#include <stdio.h>

int global_uninit_var = 520;

int main(void) // 查看程序内存布局 -> gcc test2.c -o test && size test
{
    static int num = 880;
    char *str = "FishC";

    return 0;
}