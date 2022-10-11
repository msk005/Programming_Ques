#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    char ch;
    FILE *fp,*fp1;
    fp=fopen("C:\\Users\shiva\Desktop\Codes\copyfile","w");
    fp1=fopen("C:\\Users\shiva\Desktop\Codes\newfile","r");
     ch=fgetc(fp1);
    while(ch!=EOF)
    {
        fputc(ch,fp);
        ch=fgetc(fp1);

    }
fclose(fp);
fclose(fp1);
getch();
}
