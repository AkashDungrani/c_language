#include<stdio.h>
#define p printf
#define s scanf
main()
{
int i,j,r,c,sum=0,avg;
p("enter the number of row= ");
s("%d",&r);
p("enter the numbr of column=");
s("%d",&c);

int a[r][c];
for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        p("a[%d][%d]=",i,j);
        s("%d",&a[i][j]);

        sum+=a[i][j];
    }
  }
  p("-------------------------------------\n");

  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          p("a[%d][%d]=%d\n",i,j,a[i][j]);
          
      }
  }
  p("---------------------------------\n");
  avg=sum/(r*c);
  p("average of array is =%d ",avg);
}