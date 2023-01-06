#include<stdio.h>
#define p printf
main(){
    int a,b,c;
    p("A=");
    scanf("%d",&a);
    p("B=");
    scanf("%d",&b);
    p("C=");
    scanf("%d",&c);
    if(a<b)
    {
      if(a<c)
      {
        p("A is small");
      } 
      else
      {
        p("C is small");
      }  
    }
    else
    {
     if(b<c)
     {
         p("B is small");
     }
     else
     {
         p("C is small");
     }
    }
}   