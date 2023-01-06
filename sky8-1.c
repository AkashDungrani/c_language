#include<stdio.h>
#define p printf
#define s scanf
main()
{
    int d;
    p("enter 1 for Hollywood\n");
    p("enter 2 for Bollywood\n");
    p("enter 3 for Tollywood\n");
    p("enter your choice");
    s("%d",&d);
    switch(d)
    {
        case 1 :
               p("press 1 for Fast & Furious 8\t 200\n");
               p("press 2 for Captain America\t 200\n");
               p("press 3 for Men In Black 2\t 200\n");
               p("press 4 for Avengers\t 200\n");
               p("enter your choice: ");
               s("%d",&d);
               switch(d)
               {
                   case 1 :
                           p("Fast & Furious 8\n bill=200 ");
                           break;
                   case 2:
                           p("Captain America\nbill=200");
                           break;
                   case 3:
                          p("Men In Black\n bill =200");
                          break;
                   case 4:
                         p("Avengers\nbill=200");
                         break;                      
               }       
               break;
        case 2:
              p("press 1 for Bhool Bhulaiya-2\t180rs\n");
              p("press 2 for Bachchan Pandey\t200rs\n");
              p("press 3 for Phir Hera Pheri\t180rs\n");
              p("enter your choice:");
              s("%d",&d);
              switch(d)
               {
                  case 1:
                        p("Bhool Bhulaiya -2\nBill is =180rs");
                        break;
                  case 2:
                        p("Bachchan Pandey\n Bill is=200rs");
                        break; 
                  case 3:
                        p("Phir Hera Pheri\n Bill is=180rs");
                        break;                
               }
               break;
        case 3: 
              p("press 1 for KGF 2\t200rs\n");
              p("press 2 for RRR\t200rs\n");
              p("press 3 for Pushpa\t200rs\n"); 
              p("plese enter your choice:");
              s("%d",&d);
              switch(d)
               {
                  case 1:
                        p("KGF 2\nBill is = 200rs");
                        break;
                  case 2:
                        p("RRR\nBill is = 200rs");
                        break;
                  case 3:
                        p("Pushpa\nBill is = 200rs");
                        break;           
               }
               break;
        case 4:
              p("invalid input");
              break;                       
    }
}