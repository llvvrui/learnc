#include <stdio.h>

int main()
{
    long long i , num;
    _Bool flag = 1;

    printf("请输入一个整数：");
    scanf("%lld", &num);

    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("%lld是一个素数！\n", num);
    }
    else
    {
        printf("%lld不是一个素数！\n",  num);
    }

    return 0;    
}