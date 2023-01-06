#include<stdio.h>
main(){
    int a=10,b=7,c=5;
    printf("(a+b)^2=%d\n",(a*a)+(2*a*b)+(b*b));
    printf("(a-b)^2=%d\n",(a*a)+(2*a*b)-(b*b));
    printf("(a+b)^3=%d\n",(a*a*a)+(b*b*b)+(3*a*b)*(a+b));
    printf("(a+b)^3=%d\n",(a*a*a)-(b*b*b)-(3*a*b)*(a-b));
    printf("(a+b+c)^2=%d\n",(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a));
    printf("(a+b+c)^2=%d\n",(a*a)+(b*b)+(c*c)-(2*a*b)+(2*b*c)-(2*c*a));
    printf("(a+b+c)^3=%d\n",(a*a*a)+(b*b*b)+(c*c*c)+(3*a*b)+(3*b*c)+(3*c*a));
    

}