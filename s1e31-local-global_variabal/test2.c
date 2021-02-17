#include <stdio.h>

void a();
void b();
void c();

int count = 0; // 全局变量会自动被初始化为0，不像局部变量

void a()
{
    count++;
}

void b()
{
    count++;
}

void c()
{
    count++;
}

int main()
{
    a();
    b();
    c();
    b();
    printf("小锅今天被抱了%d次\n", count);

    return 0;
}