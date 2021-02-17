#include <stdio.h>

int main()
{
    int a;
    char b;
    float c;
    double d;

    a = 520;
    b = 'F';
    c = 3.14;
    d = 3.141592653;

    printf("鱼C工作室创办于2010年的%d\n", a);
    printf("I love %cishC!\n", b);
    printf("圆周率是：%.2f\n", c);
    printf("精确到小数点后9位的圆周率是：%11.9f\n", d);

    return 0;
}