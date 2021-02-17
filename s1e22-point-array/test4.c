#include <string.h>
#include <stdio.h>

int main()
{
    char *str = "I love FishC.com!";
    int i, length;

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}