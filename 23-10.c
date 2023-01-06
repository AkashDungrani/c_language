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
    p("---------------boundry elements-------\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==0||j==0||i==r-1||j==r-1)
            {
                p("%d ",a[i][j]);
                sum+=a[i][j];
            }
            else
            {
             p("  ");
            }
        }
        
        p("\n");
    }
    
    p("sum of boundry elements of  array is =%d",sum);
}    