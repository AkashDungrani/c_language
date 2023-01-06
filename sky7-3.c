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
    if(a>b)
    {
      if(a>c)
      {
        if(a>d)
        {
            p("a is big");
        }
        else
        {
            p("d is big");
        }
      } 
      else
      {
        if(c>d)
        {
            p("c is big");
        }
        else
        {
            p("d is big");
        }
      }  
    }
    else
    {
     if(b>c)
     {
         if(b>d)
         {
             p("b is big");
         }
         else
         {
             p("d is big");
         }
     }
     else
     {
         if(c>d)
         {
             p("c is big");
         }
         else
         {
             p("d is big");
         }
     }
    }
}   