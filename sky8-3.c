#include<stdio.h>
#define p printf
#define s scanf
main()
{char n;
    p("press J for January\n");
    p("press F for February\n");
    p("press M for March\n");
    p("press A for April\n");
    p("press m for May\n");
    p("press j for June\n");
    p("press jl for July\n");
    p("press a for August\n");
    p("press S for September\n");
    p("press O for October\n");
    p("press N for November\n");
    p("press D for December\n");
    p("please enter a code of your birthday month=");
    s("%c",&n);
    switch(n)
    {
        case 'J':
              p("your birthday month is january");
              break;
        case 2:
              p("your birthday month is February");
              break;
        case 3:
              p("your birthday month is March");
              break;
        case 4:
              p("your birthday month is April");
              break;
        case 5:
              p("your birthday month is May");
              break;
        case 6:
              p("your birthday month is June");
              break;
        case 7:
              p("your birthday month is July");
              break;
        case 8:
              p("your birthday month is August");
              break;
        case 9:
              p("your birthday month is September");
              break;
        case 10:
              p("your birthday month is October");
              break;
        case 11:
              p("your birthday month is November");
              break;
        case 12:
              p("your birthday month is December");
              break;
        default:
              p("please enter valid input");
              break;
    }                                                                        
}

