 #include <stdio.h>
 #include <stdlib.h>

 #define N 4

 struct Stu
 {
     char name[24];
     int num;
     float score;
 }stu[N], sb;

 int main(void)
 {
     FILE *fp;
     int i;

     if ((fp = fopen("sorce.txt", "wb")) == NULL)
     {
         printf("文件打开失败！\n");
         exit(EXIT_FAILURE);
     }

     printf("请开始录入四个人的成绩（格式：姓名 学号 成绩）：\n");
     for (i = 0; i < N; i++)
     {
         scanf("%s %d %f", stu[i].name, &stu[i].num, &stu[i].score);
     }

     fwrite(stu, sizeof(struct Stu), N, fp);
     fclose(fp);

     if ((fp = fopen("sorce.txt", "rb")) == NULL)
     {
         printf("文件打开失败！\n");
         exit(EXIT_FAILURE);
     }

     fseek(fp, sizeof(struct Stu), SEEK_SET);
     fread(&sb, sizeof(struct Stu), 1, fp);
     printf("第 %d 位 %s 的成绩是：%.2f\n", sb.num, sb.name, sb.score);

     fclose(fp);

    return 0;
 }