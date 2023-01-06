#include<stdio.h>
#define p printf
#define s scanf
main()
{
    int a,b,c,d;
    p("A=");
    s("%d",&a);
     p("B=");
    s("%d",&b);
     p("C=");
    s("%d",&c);
     p("D=");
    s("%d",&d);
    (a>b)
         ?(a>c)
               ?(a>d)
                     ?p("A is big")
                     :p("D is big")
               :(c>d)
                     ?p("C is big")
                     :p("D is big")
                     
         :(b>c)
               ?(b>d)
                     ?p("B is big")
                     :p("D is big")
               :(c>d)
                     ?p("C is big")
                     :p("D is big");

}