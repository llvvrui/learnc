#include <stdio.h>
#include <stdlib.h>

struct Person 
{
    char name[40];
    long phone;
    struct Person *next;
};

void addPerson(struct Person **contacts);
void findPerson();
void changePerson();
void delPerson();
void displaycontacts();
void exitSystem();

void addPerson(struct Person **contacts)
{
    struct Person *person, *temp;

    person = (struct Person *)malloc(sizeof(struct Person));
    if (person == NULL)
    {
        printf("内存分配失败！\n");
        exit(1);
    }

    printf("请输入联系人姓名：");
    scanf("%s", person->name);
    printf("请输入联系人电话：");
    scanf("%ld", &person->phone);

    if (*contacts != NULL)
    {
        temp = *contacts;
        *contacts = person;
        person->next = temp;
    }
    else 
    {
        *contacts = person;
        person->next = NULL;
    }

    free(person);
}

void findPerson()
{
    printf("2\n");
}
void changePerson()
{
    printf("3\n");
}

void delPerson()
{
    printf("bye\n");
}

void displaycontacts(struct Person *contacts)
{
    struct Person *person;
    int count = 1;

    person = contacts;
    while (person != NULL)
    {
        printf("联系人%d：\n", count);
        printf("姓名：%s ", person->name);
        printf("电话：%ld\n", person->phone);
        person = person->next;
        count++;
    }
}

void exitSystem()
{
    printf("6\n");
}

int main(void)
{
    struct Person *contacts = NULL;
    int num;

    printf("\n\n#####欢迎进入通讯录管理程序#####\n\n");
    printf("1 -> 插入新的联系人\n");
    printf("2 -> 查找已有联系人\n");
    printf("3 -> 更改已有联系人\n");
    printf("4 -> 删除已有联系人\n");
    printf("5 -> 显示当前通讯录\n");
    printf("6 -> 退出通讯录程序\n");

    while (1)
    {
        printf("请输入需要的操作数：");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            addPerson(&contacts);
            break;
        case 2:
            findPerson();
            break;
        case 3:
            changePerson();
            break;
        case 4:
            delPerson();
            break;
        case 5:
            displaycontacts(contacts);
            break;
        case 6:
            exitSystem();
            break;
        default:
            printf("操作不当！请重新输入...");
        }
        if (num == 6)
        {
            break;
        }
    }

    return 0;
}