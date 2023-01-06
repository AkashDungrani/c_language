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
    (a>b)
        ?(a>c)
             ?p("a is big")
             :p("c is big")
        :(b>c)
             ?p("b is big")
             :p("c is big");    
}