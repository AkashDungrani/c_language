#include<stdio.h>
#define p printf
main(){
    int a,b;
    p("A=");
    scanf("%d",&a);
    p("B=");
    scanf("%d",&b);
    (a>b)
        ?p("A is big")
        :p("b is big");

}