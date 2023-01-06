#include<stdio.h>
#define p printf
main(){
    int a,b,c,d;
    p("A=");
    scanf("%d",&a);
    p("B=");
    scanf("%d",&b);
    p("C=");
    scanf("%d",&c);
    p("D=");
    scanf("%d",&d);
    (a>b)
         ?(a>c)
               ?(a>d)
                    ?p("a is big")
                    :p("d is big")
                :(c>d)
                     ?p("c is big")
                     :p("d is big") 
         :(b>c)
               ?(b>d)
                     ?p("b is big")
                     :p("c is big")
                :(c>d)
                     ?p("c is big") 
                     :p("d is big");                  
}