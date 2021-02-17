#include <stdio.h>

int main()
{
    char a[] = "FishC";
    int b[5] = {1, 2, 3, 4, 5};
    float c[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double d[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // int *p = b;
    // printf("*p = %d, *(p+1) = %d, *(p+2) = %d\n", *p, *(p+1), *(p+2));

    printf("*b = %d, *(b+1) = %d, *(b+2) = %d\n", *b, *(b+1), *(b+2));

    /*
    printf("a[0] -> %p, a[1] -> %p, a[2] -> %p\n", &a[0], &a[1], &a[2]);
    printf("b[0] -> %p, b[1] -> %p, b[2] -> %p\n", &b[0], &b[1], &b[2]);
    printf("c[0] -> %p, c[1] -> %p, c[2] -> %p\n", &c[0], &c[1], &c[2]);
    printf("d[0] -> %p, d[1] -> %p, d[2] -> %p\n", &d[0], &d[1], &d[2]);
    */
    return 0;
}