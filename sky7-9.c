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
      if(a>b)
            {
               if(a>c)
                     {
                        if(a>d)
                               {
                                  if(a>e)
                                         {
                                           p("A is big");
                                         }
                                  else
                                         {
                                           p("E is big");
                                         }       
                               }
                        else  
                               {
                                if(d>e)
                                        {
                                          p("d is big");
                                        }
                                 else
                                        {
                                          p("E is big");
                                        }        
                               }       
                     }
                else  
                     {
                        if(c>d)
                               {
                                  if(c>e)
                                        {
                                          p("C is big");
                                        }
                                  else
                                        {
                                          p("E is big");
                                        }      
                               }
                        else 
                               {
                                  if(d>e)
                                        {
                                          p("D is big");
                                        } 
                                  else 
                                        {
                                          p("E is big");
                                        }      
                               }       
                     }      
            }
      else
            {
               if(b>c)
                     {
                        if(b>d)
                               {
                                 if(b>e)
                                        {
                                          p("B is big");
                                        }
                                  else
                                        {
                                          p("E is big");
                                        }      
                               }
                        else 
                               {
                                 if(d>e)
                                        {
                                          p("D is big");
                                        }
                                  else 
                                        {
                                          p("E is big");
                                        }      
                               }       
                             
                     }
                else 
                     {
                         if(c>d)
                               {
                                 if(c>e)
                                        {
                                          p("C is big");
                                        }
                                  else 
                                        {
                                          p("E is big");
                                        }      
                               }
                          else 
                               {
                                  if(d>e)
                                        {
                                          p("D is big");
                                        }
                                  else 
                                        {
                                          p("E is big");
                                        }
                                         
                                               
                               }       
                     }     
                           
            }      
}