#include <stdio.h>

int main()
{
    char *cBooks[] = {
        "《C程序设计语言》",
        "《C专家编程》",
        "《C和指针》",
        "《C陷阱鱼缺陷》",
        "C Primer Plus",
        "《带你学C带你飞》"
    };

    char **byFishC;
    char **jiayuLoves[4];
    int i;

    byFishC = &cBooks[5];
    jiayuLoves[0] = &cBooks[0];
    jiayuLoves[1] = &cBooks[1];
    jiayuLoves[2] = &cBooks[2];
    jiayuLoves[3] = &cBooks[3];

    printf("FishC出版的图书有 ：%s\n", *byFishC);
    printf("小甲鱼喜欢的图书有：\n");
    for (i= 0; i < 4; i++)
    {
        printf("%s\n", *jiayuLoves[i]);
    }

    return 0;
}