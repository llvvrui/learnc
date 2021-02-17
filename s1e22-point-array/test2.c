#include <stdio.h>

int main()
{
    char str[128];

    printf("请输入鱼C工作室的域名：");
    scanf("%s", str);

    //printf("鱼C工作室的域名是：%s\n", str);

    printf("str的地址是：%p\n", &str);
    printf("str[0]的地址是：%p\n", &str[0]);

    return 0;
}