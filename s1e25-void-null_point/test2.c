#include <stdio.h>

int main()
{
    int num = 1024;
    int *pi = &num;
    char *ps = "FishC";
    void *pv;

    pv = pi;
    printf("pi: %p, pv: %p\n", pi, pv);
    printf("pv: %d\n", *(int *)pv);

    pv = ps;
    printf("pv: %p, ps: %p\n", pv, ps);
    printf("pv: %s\n", (char *)pv);

    return 0;
}