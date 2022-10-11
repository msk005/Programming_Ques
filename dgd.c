#include<stdio.h>
#include<conio.h>
int f(int n,int i);
void main()
{
    int n,i=2;
    scanf("%d",&n);
    f(n,i);
}
int f(int n,int i)
{

    if(i>n)
        exit(0);
    if(n%i!=0)
        i++;
    if(n%i==0)
    printf("%d ",i);
    f(n/i,i);
}
