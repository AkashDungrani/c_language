#include<stdio.h>
#define p printf
main(){
    int a,b,c;
    p("A=");
    scanf("%d",&a);
    p("B=");
    scanf("%d",&b);
    p("C=");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            p("A is big");
        }
        else
        {
           p("c is big");
        }
    }
    else
    {
      if(b>c)
       {
           p("b is big");
       }
       else
       {
           p("c is big");
       }
    }

}
