#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};

void insertNode(struct Node **head, int value);
void printNode(struct Node *head);
void deleteNode(struct Node **head, int value);

void insertNode(struct Node **head, int value)
{
    struct Node *pervious;
    struct Node *current;
    struct Node *new;

    current = *head;
    pervious = NULL;

    while (current != NULL && current->value < value)
    {
        pervious = current;
        current = current->next;
    }

    new = (struct Node *)malloc(sizeof(struct Node));
    if (new == NULL)
    {
        printf("分配内存失败！\n");
        exit(1);
    }

    new->value = value;
    new->next = current;

    if (pervious == NULL)
    {
        *head = new;
    }
    else
    {
        pervious->next = new;
    }
}

void printNode(struct Node *head)
{
    struct Node *current;

    current = head;
    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;
    }
    putchar('\n');
}

void deleteNode(struct Node **head, int value)
{
    struct Node *pervious;
    struct Node *current;

    current = *head;
    pervious = NULL;

    while (current != NULL && current->value != value)
    {
        pervious = current;
        current = current->next;
    }

    if (current == NULL)
    {
        printf("找不到匹配的节点！\n");
        return;
    }
    else
    {
        if (pervious == NULL)
        {
            *head = current->next;
        }
        else
        {
            pervious->next = current->next;
        }
        
        free(current);  
    }
}

int main(void)
{
    struct Node *head = NULL;
    int input;

    printf("开始测试插入整数...\n");
    while (1)
    {
        printf("请输入一个整数（-1表示结束）：");
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        insertNode(&head, input);
        printNode(head);
    }

    printf("开始测试删除整数...\n");
    while (1)
    {
        printf("请输入一个整数（-1表示结束）：");
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        deleteNode(&head, input);
        printNode(head);
    }

    return 0;
}