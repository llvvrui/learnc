#include <stdio.h>
#include <stdlib.h>

#define MAX 1024

int main(void)
{
    FILE *fp;
    char buffer[MAX];

    if ((fp = fopen("lines.txt", "w")) == NULL)
    {
        printf("文件打开失败！\n");
        exit(EXIT_FAILURE);
    }

    fputs("Lines one: Hello World!\n", fp);
    fputs("Lines two: Hello FishC!\n", fp);
    fputs("Lines three: I love FishC.com!\n", fp);

    fclose(fp);

    if ((fp = fopen("lines.txt", "r")) == NULL)
    {
        printf("文件打开失败！\n");
        exit(EXIT_FAILURE);
    }

    while (!feof(fp))
    {
        fgets(buffer, MAX, fp); // 遇到换行符就会结束一个字符串
        printf("%s", buffer);
    }

    fclose(fp);
    
    return 0;
}