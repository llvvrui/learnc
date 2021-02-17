#include <stdio.h>

int main()
{
    char isRian, isFree;

    printf("是否有空？（Y/N）");
    scanf("%c", &isFree);

    getchar(); //过滤回车

    printf("是否下雨？（Y/N）");
    scanf("%c", &isRian);

    if (isFree == 'Y') //if最好每次都带大括号
    {
        if (isRian == 'Y')
        {
            printf("记得带伞哦^_^\n");
        }
    }
    else
    {
        printf("女神没空T_T\n");
    }

    return 0;
}