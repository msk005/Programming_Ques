#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("C:\\Users\shiva\Desktop\Codes\bubble.c","r");
    if(fp==NULL)
    {
        printf("file not open");
        exit(0);
    }

    while(ch!=EOF)
    {

    ch=fgetc(fp);
     printf("%c",ch);

    }

    fclose(fp);

}
