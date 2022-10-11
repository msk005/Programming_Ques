//wap in c yo find time execution of program

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
void main()
{int n=1000,i=1;
clock_t starttime,endtime;
double timelag;
starttime=clock();
//-----------------------------------------------------------
for( i=1;i<=10;i++)
      printf("%d",n*i);
//-----------------------------------------------------------
timelag=((double)endtime-starttime/CLOCKS_PER_SEC);
printf("\n %f time took to execute",timelag);
printf("clock stoped hit enter again");
getch();
}
