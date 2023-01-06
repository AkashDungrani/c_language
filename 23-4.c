#include<stdio.h>
#define p printf
#define s scanf
main()
{
    int i,j,r,c;
    p("enter the number of row=");
    s("%d",&r);
    p("enter the the number of column=");
    s("%d",&c);

    int a[r][c],b[r][c],sum[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p("a[%d][%d]=",i,j);
            s("%d",&a[i][j]);

        }
    }
    p("-------------------------\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p("b[%d][%d]=",i,j);
            s("%d=",&b[i][j]);

        }
    }
    p("-------------------------\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
    }

    p("-----------------------------\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p("b[%d][%d]=%d\n",i,j,b[i][j]);
        }
    }
    p("\n\nsum of array a &b=\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p("a[%d][%d]+b[%d][%d]=%d\n",i,j,i,j,sum[i][j]);
        }
    }
}