#include <stdio.h>

int main()
{
    char hasBF;

    printf("小花你有男朋友吗？（Y/N）");
    scanf("%c", &hasBF);

    if ('Y' == hasBF) //判等
    {
        printf("那祝福你们咯！\n");
    }
    else
    {
        printf("那我们在一起吧！\n");
    }
    
    return 0;
}