#include<stdio.h>
#define p printf
main(){
    int a,b,c,d,e;
    p("A=");
    scanf("%d",&a);
    p("B=");
    scanf("%d",&b);
    p("C=");
    scanf("%d",&c);
    p("D=");
    scanf("%d",&d);
    p("E=");
    scanf("%d",&e);
    (a>b)
         ?(a>c)
               ?(a>d)
                    ?(a>e)
                        ?p("a is big")
                        :p("e is big")
                :(c>d)
                     :(c>e)
                           ?p("c is big")
                           :p("e is big") 
         :(b>c)
               ?(b>d)
                     ?(b>e)
                          ?p("b is big")
                          :p("e is big")
                :(c>d)
                     :(d>e)
                          ?p("d is big") 
                          :p("e is big");                  
}