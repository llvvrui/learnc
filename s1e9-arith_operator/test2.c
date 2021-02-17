#include <stdio.h>

int main()
{
    printf("整形输出：%d\n", 1 + 2.0);
    printf("浮点型输出：%f\n", 1 + 2.0); // 1.0 + 2.0
    printf("整形输出：%d\n", 1 + (int)2.0); // 类型转换

    return 0;
}