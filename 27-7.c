#include<stdio.h>
main()
{
    int i,r,c,j;
    printf("enter row=");
    scanf("%d",&r);
    printf("enter column=");
    scanf("%d",&c);
    int a[r][c],trans[r][c];
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("\n------------------------------\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("%d",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        trans[j][i]=a[i][j];
        }
    }
     printf("\n----transpose array----\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("%d",trans[i][j]);
        }
        printf("\n");
    }
}