#include<stdio.h>
main()
{
    int i,n,avg,sum=0;
    printf("enter the number=");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("\n--------------\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i+1,a[i]);
    }
    avg=sum/n;
    printf("\n");
    printf("------------------------\n");
    printf("average of array is %d\n",avg);
}