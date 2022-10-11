#include<stdio.h>
#include<conio.h>
void main()
{
    int a[1000],i,m,n,k;
    printf("Enter length of array=\n");
    scanf("%d",&k);
    printf("Enter elements=");
    for(i=0;i<k;i++)
        scanf("%d",&a[i]);
        printf("enter index of subarray to be deleted (from ,to)");
        scanf("%d,%d",&n,&m);
        for(i=0;i<m-n+1;i++)
            a[i+n]=a[m+1+i];
                for(i=0;i<k-(m-n+1);i++)
                    printf("%d ",a[i]);

}
