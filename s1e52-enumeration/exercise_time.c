#include <stdio.h>
#include <time.h>

#define SUN 0
#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6

int main(void)
{
    struct tm *p;
    time_t t;

    time(&t); // 获取当前秒数
    p = localtime(&t);

    switch(p->tm_wday)
    {
        case MON:
        case TUE:
        case WED:
        case THU:
        case FRI:
            printf("干活！T_T\n");
            break;
        case SAT:
        case SUN:
            printf("放假！^_^\n");
            break;
        default:
            printf("Error！\n");
    }

    return 0;
}