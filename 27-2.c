#include<stdio.h>
main()
{
    int i,n,j,k;
    printf("enter the size of array=");
    scanf("%d",&n);

    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
              k=a[i];
              a[i]=a[j];
              a[j]=k;
            }
        }
    }
    printf("ascending order array\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==n-2)
        {
            printf("second largest number of array is %d ",a[i]);
        }
    }
}