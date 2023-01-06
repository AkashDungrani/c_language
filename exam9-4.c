#include<stdio.h>
#define p printf
#define s scanf
main()
{
    char n;
   
    p("enter M for monday\n");
    p("enter T for tuesday\n");
    p("enter W for wednesday\n");
    p("enter t for thurseday\n");
    p("enter F for friday\n");
    p("enter S for saturday\n");
    p("enter s for sunday\n");
     p("enter your choice=");
    s("%c",&n);
    switch(n)
      {
          case 'M':
                 p("today is monday");
                 break;
          case 'T':
                 p("today is tuesday");
                 break;
          case 'W':
                 p("today is wednesday");
                 break;
          case 't':
                 p("today is tuesday");
                 break;
          case 'F':
                 p("today is friday");
                 break;
          case 'S':
                 p("today is saturday");
                 break;
          case 's':
                 p("today is sunday");
                 break;
          default:
                p("invalid input");                                                 
      }
    
}






