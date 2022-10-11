void main()
{int n,i,arr[50],a,b,n2;
printf("Enter length ");
scanf("%d",&n);
printf("Enter elements ");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
for(i=0;i<n;i++)
    printf("%d ",arr[i]);
 printf("\nEnter Index ");
 scanf("%d",&a);
printf("\nEnter length ");
scanf("%d",&n2);
for(i=a+1;i<n+n2;i++)
    arr[i+n2]=arr[i];
printf("\nEnter elements ");
for(i=a+1;i<=n2+n-a;i++)
    scanf("%d",&arr[i]);
    printf("\n");
for(i=0;i<n+n2;i++)
    printf("%d ",arr[i]);
}
