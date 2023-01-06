#include<stdio.h>
main()
{
    int i,n;
    printf("enter the size of array=");
    scanf("%d",&n);

    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("output of array a");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf(" negative number of array is ...\n");

    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d",a[i]);
        }
    }
}