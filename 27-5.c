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
    printf("left rotate\n");
    
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    
    printf("right rotate\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}