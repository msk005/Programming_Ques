#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i,n,j,f,k;
    char a[100],st;
    printf("enter sentence=");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {   f=0;
          k=0;
        st=a[i];
        for(j=0;j<n;j++)
        {
        if(st==a[j])
        { f++;
           if(j<i)
            k++;

        }
        }
        if(k==0&&st!=' ')
        printf("\n%c=%d",st,f);

    }
getch();
}
