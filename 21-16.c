#include<stdio.h>
main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)printf("%d",j);
        for(k=1;k<=5-i;k++)printf(" ");
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(j=i;j>=1;j--)printf("%d",j);
        for(k=1;k<=5-i;k++)printf(" ");
        printf("\n");
    }
}