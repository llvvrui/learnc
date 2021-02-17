#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;

    if ((fp = fopen("output.txt", "w")) == NULL)
    {
        perror("文件打开失败，原因是");
        exit(EXIT_FAILURE);
    }

    fputs("I love FishC.com", fp); // 有缓冲区
    getchar();

    fclose(fp);

    return 0;
}