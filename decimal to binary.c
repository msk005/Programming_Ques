#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][12]={
                  {1,2,3},
                  {4,5,6},
                  {7,8,9}};

    printf("\n%u",*(a+1)+2);
    printf("\n%d",*(*(a+1)+2));
    printf("\n%u",a);
    printf("\n%u",a+2);
    printf("\n%u",**a);
    getch();
}
