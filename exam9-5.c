#include<stdio.h>
#define p printf
#define s scanf
main()
{
    int u;
    float a,ta,sur;
    p("enter unit=");
    s("%d",&u);
    if(u<=50)
    {
        a=u * 0.50;
    }
    else if(u<=150)
    {
        a= 25+ (u-50)*0.70;
    }
    else if(u<=250)
    {
        a=100+(u-150)*1.20;
    }
    else
    {
         a=220+(u-250)*1.50;
    }
    sur=a*0.20;
    ta =a + sur;
    p("your electricity bill is %f",ta);
}