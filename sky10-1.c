#include<stdio.h>
#define p printf
#define s scanf
main()
{
    int d,bill=0,qty =1;
    tmp:
    
    p("\t\t\tenter 1 for pizza\n");
    p("\t\t\tenter 2 for sandwitch\n");
    p("\t\t\tenter 3 for chienies\n");
    p("\t\t\tenter 4 for cold drinks\n");
    p("\t\t\tenter your choice=\n");
    s("%d",&d);
    
    switch(d)
    {
      case 1:
             system("cls");
             p("\t\t\tpress 1 for Margherita\t300rs\n");
             p("\t\t\tpress 2 for italiyan\t250rs\n");
             p("\t\t\tpress 3 for chesee seven \t400rs\n");

             p("\t\t\tplease enter your choice = ");
             s("%d",&d);
             switch(d)
             {
                 case 1:
                       p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order %d margherita\n");
                       bill += 300*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                                        
                       }
                        break;
                 case 2:
                        p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order italiyan %d\n");
                       bill += 250*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                       }
                       break;
                 case 3:
                        p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order chese seven %d\n");
                       bill += 400*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                       }
                       break;                           

             }
        case 2:
             system("cls");
             p("\t\t\tpress 1 for Greel sandwitch\t120rs\n");
             p("\t\t\tpress 2 for cheese sandwitch\t60rs\n");
             p("\t\t\tpress 3 for sezwan sandwitch\t40rs\n");

             p("\t\t\tplease enter your choice = ");
             s("%d",&d);
             switch(d)
             {
                 case 1:
                       p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order %d Greel sandwitch\n");
                       bill += 120*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                                        
                       }
                        break;
                 case 2:
                        p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order %d cheese sandwitch\n");
                       bill += 60*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                       }
                       break;
                 case 3:
                        p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order %d sezwan sandwitch\n");
                       bill += 40*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                       }
                       break;                           

             } 
       case 3:
             system("cls");
             p("\t\t\tpress 1 for Manchurian\t120rs\n");
             p("\t\t\tpress 2 for chinese bhel\t160rs\n");
             p("\t\t\tpress 3 for Bombay bhel\t140rs\n");

             p("\t\t\tplease enter your choice = ");
             s("%d",&d);
             switch(d)
             {
                 case 1:
                       p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order %d Manchurian\n");
                       bill += 120*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                                        
                       }
                        break;
                 case 2:
                        p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order %d chinese bhel\n");
                       bill += 160*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                       }
                       break;
                 case 3:
                        p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order %d Bombay Bhel\n");
                       bill += 140*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                       }
                       break;                           

             } 
       case 4:
             system("cls");
             p("\t\t\tpress 1 for Mazza\t20rs\n");
             p("\t\t\tpress 2 for Coca Cola \t20rs\n");
             p("\t\t\tpress 3 for Fenta\t20rs\n");

             p("\t\t\tplease enter your choice = ");
             s("%d",&d);
             switch(d)
             {
                 case 1:
                       p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order %d Mazza\n");
                       bill += 20*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                                        
                       }
                        break;
                 case 2:
                        p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order %d Coca Cola\n");
                       bill += 20*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                       }
                       break;
                 case 3:
                        p("\t\t\tenter quantity= ");
                       s("%d",&qty);
                       p("\t\t\tyou have order %d Fenta\n");
                       bill += 20*qty;
                       system("cls");
                       p("\n\n\t\t\tenter 1 for order more\n");
                       p("\t\t\tenter 0 for bill\n");
                       p("Enter your choice = ");
                       s("%d",&d);
                       switch(d)
                       {
                           case 1:
                                  goto tmp;
                                  break;
                           case 0:
                                   break;
                       }
                       break;                           

             }                 
                      

    }
    p("your bill = %d",bill);
}