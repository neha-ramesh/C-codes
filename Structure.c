#include <stdio.h>
#include <string.h>

struct mark
{
    int mark1;
    int mark2;
    int mark3;
}m[3];


struct student
{
    int roll_no;
    int age;
    struct mark m;
    char name[20];
}s[2];

int main()
{
    int i,n,a,ms1,ms2,ms3;
    char ns[20];
    for (i=0;i<2;i++)
    {
        printf("Roll no: ");;
        scanf("%d",&n);
        s[i].roll_no=n;
        printf("\nAge: ");
        scanf("%d",&a);
        s[i].age=a;
        printf("\nMark1: ");
        scanf("%d",&ms1);
        s[i].m.mark1=ms1;
        printf("\nMark2: ");
        scanf("%d",&ms2);
        s[i].m.mark2=ms2;
        printf("\nMark3: ");
        scanf("%d",&ms3);
        s[i].m.mark3=ms3;
        printf("\nName:");
        scanf("%s",ns);
        strcpy(s[i].name,ns);
        
    }
    
    for (i=0;i<2;i++)
    {
        printf("%d %d %d %d %d %s",s[i].roll_no,s[i].age,s[i].m.mark1,s[i].m.mark2,s[i].m.mark3,s[i].name);
    }
    return 0;
}
