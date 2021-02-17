#include <stdio.h>

void func(void); // 文件作用域

int main(void)
{
    extern int count; // 声明

    func();
    count++;
    printf("In main, count = %d\n", count);

    return 0;
}

int count; // 定义

void func(void)
{
    count++;
    printf("In func, count = %d\n", count);
}