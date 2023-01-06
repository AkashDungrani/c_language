#include<stdio.h>
#define p printf
#define s scanf
main(){
    int a,b;
    p("A=");
    s("%i",&a);
    p("B=");
    s("%i",&b);
    p("sum=%d\n",a+b);
    p("sub=%d\n",a-b);
    p("mod=%d\n",a%b);
    p("mul=%d\n",a*b);
    p("div=%d\n",a/b);

}