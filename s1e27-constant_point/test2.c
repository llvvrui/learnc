#include <stdio.h>

int main()
{
    int num = 520;
    const int cnum = 880;
    const int *pc = &cnum;

    printf("cnum: %d, &cnum: %p\n", cnum, &cnum);
    printf("*pc: %d, pc: %p\n", *pc, pc);

    pc = &num;
    printf("num: %d, &num: %p\n", num, &num);
    printf("*pc: %d, pc: %p\n", *pc, pc);

    // *pc = 1024; 不可以通过解引用来修改指针指向的数据

    return 0;
}