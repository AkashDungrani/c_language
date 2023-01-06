#include<stdio.h>
#define p printf
#define s scanf
main()
{
    int i,j,r,c,sum=0;
    p("enter the number of row=");
    s("%d",&r);
    p("enter the number of column=");
    s("%d",&c);

    int a[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p("a[%d][%d]=",i,j);
            s("%d",&a[i][j]);
        }
    }
    p("-----------------------\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p("a[%d][%d]=%d",i,j,a[i][j]);

        }
        p("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=a[j][i];
        }
        p("sum of column %d=%d\n",i+1,sum);
    }
}