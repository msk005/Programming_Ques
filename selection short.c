#include<stdio.h>
#include<conio.h>
void main()
{
   int a[5]={12,34,25,454,34},i,j,t,min,n=5,minid;
   for(i=0;i<n;i++)
   {
       min=a[i];
       minid=i;
       for(j=i+1;j<n;j++)
       {
           if(min>a[j])
           {
               min=a[j];
               minid=j;

           }
       }
           t=a[i];
           a[i]=a[minid];
           a[minid]=t;
   }
       for(i=0;i<n;i++)
        printf("%d\t",a[i]);

}
