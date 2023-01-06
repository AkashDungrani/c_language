#include<stdio.h>
#define p printf
#define s scanf
main()
{
    int r,c,i,j;
    p("enter the number of row=");
    s("%d",&r);
    p("enter the number of column=");
    s("%d",&c);

    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p("a[%d][%d]= ",i,j);
            s("%d",&a[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p("%d ",a[i][j]);

        }
        p("\n");
    }
}