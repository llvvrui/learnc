#include <stdio.h>

void func();

int a, b = 520; // a未被初始化，会被初始化为0

void func()
{
    int b;

    a = 880; // 局部没有定义，会改变全局变量
    b = 120; // 局部定义了，不会改变全局变量，只改变局部

    printf("In func, a = %d, b = %d\n", a, b);
}

int main()
{
    printf("In main, a = %d, b = %d\n", a, b);
    func();
    printf("In main, a = %d, b = %d\n", a, b);

    return 0;
}