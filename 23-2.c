#include<stdio.h>
#define p printf
#define s scanf
main()
{
    int r,c,i,j,len=0;
    p("emter the number of row=");
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
    
    printf("\n\n---------------\n\n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       { 
        p("a[%d][%d]=%d\n",i,j,a[i][j]);
        len++;
       }    
    }
    p("-------------------------------------\n");
    p("length of array=%d",len);
    
    
}