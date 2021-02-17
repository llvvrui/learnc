#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int ch;

    if ((fp = fopen("output.txt", "r")) == NULL)
    {
        fputs("打开文件失败！\n", stderr);
        exit(EXIT_FAILURE);
    }

    while (1)
    {
        ch = fgetc(fp);
        if (feof(fp))
        {
            break;
        }
        putchar(ch);
    }

    fputc('c', fp);
    if (ferror(fp))
    {
        fputs("出错了！\n", stderr);
    }

    clearerr(fp);
    if (feof(fp) || ferror(fp))
    {
        printf("啦啦啦啦！\n");
    }

    fclose(fp);

    return 0;
}