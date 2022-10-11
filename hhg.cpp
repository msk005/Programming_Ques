#include<stdio.h>
int main()
{


int i,j;
for(i=1;i<100;i++)
{
    if(i%5==4)
    {
        if(i%4==3)
        {
            if(i%3==2)
            {
            printf("%d",i);
            }
        }
    }

}
}
