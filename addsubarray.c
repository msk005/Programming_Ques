void main()
{
    int a[1000],i,k,n,id;
    printf("enter length of array=");
    scanf("%d",&k);
    printf("enter elements=");
    for(i=0;i<k;i++)
        scanf("%d",&a[i]);
    printf("enter size of subarray=");
    scanf("%d",&n);
    printf("enter index to place subarray=");
    scanf("%d",&id);
    printf("enter subarray=");
    for(i=k-1;i>id;i--)
        a[i+n]=a[i];
    for(i=id+1;i<=id+n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k+n;i++)
        printf("%d ",a[i]);
}
