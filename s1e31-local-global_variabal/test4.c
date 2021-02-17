#include <stdio.h>

void func();

void func()
{
    extern count;
    count++;
}

int count = 0;

int main()
{
    func();

    printf("%d\n", count);

    return 0;
}