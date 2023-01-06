#include<stdio.h>
#define p printf
#define s scanf
main()
{
    int a,b,c,d;
    p("A=");
    s("%d",&a);
    p("B=");
    s("%d",&b);
    p("C=");
    s("%d",&c);
    p("D=");
    s("%d",&d);
    if(a>b)
          {
            if(a>c)
                   {
                     if(a>d)
                            {
                                p("A is big");
                            }
                      else
                            {
                                p("D is big");
                            }       
                   }
            else   
                   {
                     if(c>d)
                            {
                                p("C is big");
                            }
                     else
                            {
                                p("D is big");
                            }       
                   }       
          }
    else  
          {
            if(b>c)
                   {
                       if(b>d)
                             {
                                 p("B is big");
                             }
                        else
                            {
                                p("D is big");
                            }     
                   }
            else
                   {
                       if(c>d)
                            {
                                p("C is big");
                            }
                        else
                            {
                                p("D is big");
                            }        
                   }       
          }      
}