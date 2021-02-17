#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;

    if ((fp = fopen("hello.txt", "w")) == NULL)
    {
        printf("文件打开失败！\n");
        exit(EXIT_FAILURE);
    }

    printf("%ld\n", ftell(fp));
    fputc('F', fp);
    printf("%ld\n", ftell(fp));
    fputs("ishC\n", fp);
    printf("%ld\n", ftell(fp));

    rewind(fp);
    fputs("Hello", fp);

    fclose(fp);

    return 0;
}