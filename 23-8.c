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
    p("-------------matrix----------\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p("%d ",a[i][j]);

        }
        p("\n");
    }
    p("----------------anti diagonal----------\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i+j==r-1)p("%d ",a[i][j]);
        }
        p("\n");
    }

    p("------------------------------\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i+j==r-1)
            {
                sum+=a[i][j];
            }
        }
    }
    p("sum of diagonal array is =%d",sum);
}