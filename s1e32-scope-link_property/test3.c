#include <stdio.h>

void a(void);
void b(void);
void c(void);


static int count; // static - > internal, 只限在本文件访问

int main(void)
{
    a();
    b();
    c();
    b();

    printf("小锅今天一共被抱了%d次！\n", count);

    return 0;
}