#include<stdio.h>
main()
{
    int i,n;
    printf("enter the number=");
    scanf("%d",&n);
    int a[n],b[n],sum[n];
    
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n\n\n");

    for(i=0;i<n;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];
    }
    printf("--------------\n");
    printf("output of a=");
    printf("\n-----------------\n");

    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i+1,a[i]);
    }
     printf("--------------\n");
    printf("output of b=");
    printf("\n-----------------\n");

    for(i=0;i<n;i++)
    {
        printf("b[%d]=%d\n",i+1,b[i]);
    }
     printf("--------------\n");
    printf("output of sum=");
    printf("\n-----------------\n");

    for(i=0;i<n;i++)
    {
        printf("a[%d]+b[%d]=%d\n",i+1,i+1,sum[i]);
    }
}