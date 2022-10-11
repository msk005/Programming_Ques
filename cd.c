#include <stdio.h>
#include<conio.h>
int main() {
int i,n,a,s=0,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a);
if(a/2<2)
printf("0\n");
else if(a/2==2)
printf("1\n");
else if(a/2>2)
{     s=0;
    for(j=a/2-1;j>0;j--)
      s=s+j;
printf("%d\n",s);
}
}
	getch();
}
