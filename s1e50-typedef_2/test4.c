#include <stdio.h>

typedef int (*PTR_TO_FUN)(int, int);

int add(int, int);
int sub(int, int);
int calc(PTR_TO_FUN, int, int);
PTR_TO_FUN select(char);
// int calc(int (*)(int, int), int, int);
// int (*select(char))(int, int);

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int calc(int (*fp)(int, int), int num1, int num2)
{
    return (*fp)(num1, num2);
}

int (*select(char op))(int, int)
{
    switch(op)
    {
        case '+': return add;
        case '-': return sub;
        // default: return add;
    }
}

int main()
{
    int num1, num2;
    char op;
    int (*fp)(int, int);

    printf(":请输入一个式子（如1+2）：");
    scanf("%d%c%d", &num1, &op, &num2);

    fp = select(op);
    printf("%d %c %d = %d\n", num1, op, num2, calc(fp, num1, num2));

    return 0;
}