#include <stdio.h>

int main()
{
    int i;

    printf("您老贵庚啊：");
    scanf("%d", &i);

    if (i >= 18) 
    {
        printf("进门左拐！\n");
    }

    return 0;
}