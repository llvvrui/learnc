#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    FILE *fp;

    if ((fp = fopen("none.txt", "r")) == NULL)
    {
        // perror("打开文件失败！原因是：");
        fprintf(stderr, "出错啦，原因竟然是 -> %s <- 这个！\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    fclose(fp);

    return 0;
}