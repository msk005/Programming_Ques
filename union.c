#include<stdio.h>
void main()
{
    int a[]={1,2,3,4},b[]={3,4,5,6},c[8],i,z=0;
    for(i=0;i<4;i++)
        if(a[i]!=b[i])
    {
        c[z]=a[i];
        z++;
        c[z]=b[i];
        z++;
    }
    for(i=0;i<z;i++)
        printf("%d",c[i]);
}
