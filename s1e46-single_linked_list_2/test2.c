#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    char title[128];
    char author[40];
    struct Book *next;
};

void getInput(struct Book *book);
void addBook(struct Book **library);
void printLibrary(struct Book *library);
struct Book *searchBook(struct Book *library, char *target);
void printBook(struct Book *book);
void releaseLibrary(struct Book **library);

void getInput(struct Book *book)
{
    printf("请输入书名：");
    scanf("%s", book->title);
    printf("请输入作者：");
    scanf("%s", book->author);
}

void addBook(struct Book **library)
{
    struct Book *book, *temp;
    static struct Book *tail;

    book = (struct Book *)malloc(sizeof(struct Book));
    if (book == NULL)
    {
        printf("内存分配失败！\n");
        exit(1);
    }

    getInput(book);

    if (*library != NULL)
    {
        tail->next = book;
        book->next = NULL;
    }
    else
    {
        *library = book;
        book->next = NULL;
    }
    tail = book;
}

void printLibrary(struct Book *library)
{
    struct Book *book;
    int count = 1;

    book = library;
    while (book != NULL)
    {
        printf("Book%d：", count);
        printf("书名：%s ", book->title);
        printf("作者：%s\n", book->author);
        book = book->next;
        count++;
    }
}

struct Book *searchBook(struct Book *library, char *target)
{
    struct Book *book;

    book = library;
    while (book != NULL)
    {
        if (!strcmp(book->title, target) || !strcmp(book->author, target))
        {
            break;
        }
        book = book->next;
    }

    return book;
}

void printBook(struct Book *book)
{
    printf("书名：%s ", book->title);
    printf("作者：%s\n", book->author);
}

void releaseLibrary(struct Book **library)
{
    struct Book *temp;

    while (*library != NULL)
    {
        temp = *library;
        *library = (*library)->next;
        free(temp);
    }
}

int main(void)
{
    struct Book *library = NULL;
    struct Book *book;
    char input[128];
    int ch;
    while (1)
    {
        printf("请问是否要录入书籍信息（Y/N）：");
        do
        {
            ch = getchar();
        } while (ch != 'Y' && ch != 'N');
        if (ch == 'Y')
        {
            addBook(&library);
        }
        else
        {
            break;
        }
    }
    printf("请问是否要打印书籍信息（Y/N）：");
    do
    {
        ch = getchar();
    } while (ch != 'Y' && ch != 'N');
    if (ch == 'Y')
    {
        printLibrary(library);
    }

    printf("请输入书名或作者：");
    scanf("%s", input);

    book = searchBook(library, input);
    if (book == NULL)
    {
        printf("很抱歉，未找到！\n");
    }
    else 
    {
        do
        {
            printf("找到符合条件的图书...\n");
            printBook(book);
        } while ((book = searchBook(book->next, input)) != NULL);
        
    }

    releaseLibrary(&library);

    return 0;
}