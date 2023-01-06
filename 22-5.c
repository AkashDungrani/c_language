#include<stdio.h>
#define p printf
#define s scanf
main()
{
    int n1,n2,i,j=0;
    p("enter the number= ");
    s("%d",&n1);
    p("enter the number= ");
    s("%d",&n2);

    int a[n1],b[n2],mer[n1+n2];

    for(i=0;i<n1;i++)
    {
      p("a[%d]=",i);
      s("%d",&a[i]);
    }
    p("\n\n\n");

     for(i=0;i<n2;i++)
    {
      p("b[%d]=",i);
      s("%d",&b[i]);
    }
    p("\n\n\n");

    p("-----------------\n");
    p("output of a=");
    p("\n-------------------\n");

    for(i=0;i<n1;i++)
    {
        p("a[%d]=%d\n",i+1,a[i]);
    }

    p("-----------------\n");
    p("output of b=");
    p("\n-------------------\n");

    for(i=0;i<n2;i++)
    {
        p("b[%d]=%d\n",i+1,b[i]);
    }

    for(i=0;i<n1;i++)
    {
        mer[j]=a[i];
        j++;
    }

    for(i=0;i<n2;i++)
    {
        mer[j]=b[i];
        j++;
    }

    p("-----------------\n");
    p("output of mer=");
    p("\n-------------------\n");

    for(i=0;i<n1+n2;i++)
    {
        p("mer[%d]=%d\n",i+1+1,mer[i]);
    }
}