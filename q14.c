char chcv(char *);
int main()
{
    char a[20]="Computer prig";
    chcv(a+5);
    printf("%s\n",a);

}
char chcv(char *pt)
{
    if(*pt='a','e','i','o','u')
        *pt=!;
    else
        *pt=*;

}
