#include<stdio.h>
main()
{
    int i,n,j=0;
    printf("enter the value=");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    
    printf("\n\n---------------\n\n");
        for(i=0;i<n;i++)  
   {
        printf("a[%d]=%d\n",i+1,a[i]);
        j++;
    }
    printf("\n");
    printf("-------------------\n");
    printf("length of 1d array is %d\n",j);
}