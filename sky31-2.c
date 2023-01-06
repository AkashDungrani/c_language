#include<stdio.h>
#define p printf
main(){
    int a,b,c;
    p("A=");
    scanf("%d",&a);
    p("B=");
    scanf("%d",&b);
    p("c=");
    scanf("%d",&c);
    p("(a+b^2=%d\n",(a*a)+(2*a*b)+(b*b));
    p("(a-b)^2=%d\n",(a*a)+(2*a*b)-(b*b));
    p("(a+b)^3=%d\n",(a*a*a)+(b*b*b)+(3*a*b)*(a+b));
    p("(a-b)^3=%d\n",(a*a*a)-(b*b*b)-(3*a*b)*(a-b));
    p("(a+b+c)^2=%d\n",(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a));
    p("(a+b+c)^2=%d\n",(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a));
    p("(a+b+c)^3=%d\n",(a*a*a)+(b*b*b)+(c*c*c)+(3*a*b)+(3*b*c)+(3*c*a));

}