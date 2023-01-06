#include<stdio.h>
#define p printf
main(){
    int a,b,c,d,e;
    p("A=");
    scanf("%d",&a);
    p("B=");
    scanf("%d",&b);
    p("C=");
    scanf("%d",&c);
    p("D=");
    scanf("%d",&d);
    p("E=");
    scanf("%d",&e);
    if(a<b)
    {
      if(a<c)
        {
         if(a<d)
         {
            if(a<e)
            {
                p("a is small");
            }
            else
            {
                p("e is small");
            }
         }
         else
          {
            if(d<e)
            {
                p("d is small");
            }
            else
            {
                p("e is small");
            }
         }
        
       } 
      else
      {
        if(c<d)
        {
            if(c<e)
            {
                p("c is small");
            }
            else
            {
                p("e is small");
            }
        }
        else
        {
            if (d<e)
            {
                p("d is small");
            }
            else
            {
                p("e is small");/* code */
            }
            
        }
      }  
    }
    else
    {
     if(b<c)
     {
         if(b<d)
         {
            if(b<e)
            {
                p("b is small");
            }
            else
            {
                p("e is small");
            }
         }
         else
         {
             if(d<e)
             {
                 p("d is small");
             }
             else
             {
                 p("e is small");
             }
         }
     }
     else
     {
         if(c<d)
         {
             if(c<e)
             {
                 p("c is small");
             }
             else
             {
                 p("e is small");
             }
         }
         else
         {
             if(d<e)
             {
                 p("d is small");
             }
             else
             {
                 p("e is small");
             }
         }
     }
    }
}   