#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],t,i,j;
    printf("enter n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
