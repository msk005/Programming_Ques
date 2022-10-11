#include<stdio.h>
#include<conio.h>
void main()
{   int n,i;
    struct stud{
    int roll;
    char name[30];
    float marks;
    }a;
    FILE *fp;
    fp=fopen("C:\\Users\\shiva\\Desktop\\Codes\\newfile","r");


         while(fscanf(fp,"%s %d %f",a.name,&a.roll,&a.marks)!=EOF)
         printf("%s\n%d\n%f\n",a.name,a.roll,a.marks);

    fclose(fp);
    getch();
}
