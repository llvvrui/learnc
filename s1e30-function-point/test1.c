#include <stdio.h>

char *getWord(char);

char *getWord(char c)
{
    switch(c)
    {
        case 'A': return "Apple";
        case 'B': return "Banana";
        case 'C': return "Cat";
        case 'D': return "Dog";
        default: return "None";
    }
}

int main()
{
    char input;

    printf("请输入一个字母：");
    scanf("%c", &input);

    printf("%s\n", getWord(input));

    return 0;
}