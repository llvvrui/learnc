#include <stdio.h>


int main()
{
    char str[] = "You are right!";
    char *p = str;

    printf("sizeof of str -> %lu\n", sizeof(str));
    printf("sizeof of p -> %lu\n", sizeof(p));

    return 0;
}