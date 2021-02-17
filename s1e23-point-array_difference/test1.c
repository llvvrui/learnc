#include <stdio.h>

int main()
{
    // 指针变量和字符串名
    // 相同点都指向地址
    // 不同点指针变量是一个左值，字符串名是一个地址常量，不是一个左值
    char str[] = "I love FishC.com!"; // 结论：数组名只是一个地址，而指针是一个左值
    char *target = str;
    int count = 0;

    while (*target++ != '\0') // ++运算符要赋值，必须可改变 -> 左值 
    {
        count++;
    }

    printf("总共有%d个字符！\n", count);

    return 0;
}