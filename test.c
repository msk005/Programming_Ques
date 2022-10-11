#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
int rollno;
int age;
char name[56];
};
void main()
{
int i;

    struct student st[5];
    for(i=0;i<2;i++)
    {
    printf("enter rollno=");
    scanf("%d",&st[i].rollno);
    printf("age=");
    scanf("%d",&st[i].age);
    printf("name=");
    scanf("%s",st[i].name);
    }

    for(i=0;i<2;i++)
    {
    printf("\nrollno=%d",st[i].rollno);
    printf("\nage=%d",st[i].age);
    printf("\nname=%s",st[i].name);
    }
    getch();
}
