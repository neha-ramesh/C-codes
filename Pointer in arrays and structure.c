#include <stdio.h>
#include <string.h>

struct customers
{
    char name[20];
    int acc;
    int balance;
}s[2];

void func(struct customers *ptr);

int main()
{
    int num,i;
    for (i=0;i<2;i++)
    {
        scanf("%s",s[i].name);
        scanf("%d",&s[i].acc);
        scanf("%d",&s[i].balance);
    }
    return 0;
}

void func(struct customers *ptr)
{
    int i;
    for (i=0;i<2;i++)
    {
        printf("%s",ptr ->name);
        printf("%d",ptr->acc);
        printf("%d",ptr->balance);
    }
}
