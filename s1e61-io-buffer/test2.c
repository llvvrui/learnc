#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[1024];

    memset(buff, '\0', sizeof(buff));

    setvbuf(stdout, buff, _IOFBF, 1024); //_IONBF，没有缓存

    fprintf(stdout, "Welcome to bbs.fishc.com\n");

    fflush(stdout);

    fprintf(stdout, "请输入任意字符才会显示该行字符！\n");

    getchar();

    return 0;
}