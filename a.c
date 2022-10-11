#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if((n%4==0&&n%100!=0)||n%400==0)
    printf("leap yr");
        else
        printf("not leap yr");

}
