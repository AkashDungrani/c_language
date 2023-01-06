#include<stdio.h>
#define p printf
main()
{
    int a;
    p("A=");
    scanf("%d",&a);

    (a%2==0)
           ?p("number is even")
           :p("number is odd");
}