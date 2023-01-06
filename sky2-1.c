#include<stdio.h>
#define p printf

main(){
    int a,b;
    p("a=");
    scanf("%d",&a);
    p("b=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    p("a=%d\n",a);
    p("b=%d\n",b);
    
    
}