#include<stdio.h>
main()
{
    int i,n,pos,val;
    printf("enter the size of array=");
    scanf("%d",&n);

    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("output of array a=\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("enter position=");
    scanf("%d",&pos);

    printf("enter the value =");
    scanf("%d",&val);

    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
        a[pos-1]=val;
    }


    for(i=0;i<n;i++)
    {
      printf("a[%d]=%d\n",i,a[i]);
    }
    printf("enter the position=");
    scanf("%d",&pos);

    for(i=0;i<n;i++)
    {
        if(pos==i-1)
        {
            printf("a[%d]=%d\n",i,a[i]);
        }
    }
}
