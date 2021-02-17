#include <stdio.h>

void get_array(unsigned long *b);

void get_array(unsigned long *b)
{
    printf("sizeof b: %lu\n", sizeof(b));
}

int main()
{
    unsigned long a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    printf("sizeof a: %lu\n", sizeof(a));
    get_array(a);

    return 0;
}