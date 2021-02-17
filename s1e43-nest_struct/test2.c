#include <stdio.h>

struct Date
{
    int year;
    int month;
    int day;
};

struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
} book = {
    "带你学C带你飞",
    "小甲鱼",
    48.80,
    {2017, 11, 11},
    "清华大学出版社"};

int main(void)
{
    struct Book *pt;
    pt = &book;

    // printf("书名：%s\n", (*pt).title);
    // printf("作者：%s\n", (*pt).author);
    // printf("售价：%f\n", (*pt).price);
    // printf("出版日期：%d-%d-%d\n", (*pt).date.year, book.date.month, book.date.day);
    // printf("出版社：%s\n", (*pt).publisher);

    printf("书名：%s\n", pt->title);
    printf("作者：%s\n", pt->author);
    printf("售价：%f\n", pt->price);
    printf("出版日期：%d-%d-%d\n", pt->date.year, book.date.month, book.date.day);
    printf("出版社：%s\n", pt->publisher);

    return 0;
}