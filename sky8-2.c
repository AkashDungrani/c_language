#include<stdio.h>
#define p printf
#define s scanf
main()
{
int n,bill=0,seat=1;
tmp:
p("enter 1 for Hollywood\n");
p("enter 2 for Bollywood\n");
p("enter 3 for Tollywood\n");
p("enter 4 for Gujarati\n");
p("Enter your choice=");
s("%d",&n);
switch(n)
  {
      case 1:
            
            p("enter 1 for Fast & Furious 8\t\n");
            p("enter 2 for Thor Ragnarock\t\n");
            p("enter 3 for Dr.Strange\t\n");
            p("enter 4 for Avengers End Game\t\n");
            p("Enter Your Choice=");
            s("%d",&n);
            switch(n)
            {
                case 1 :
                       p("FAST & FURIOUS 8 \n");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t180rs\n");
                       p("enter 3 for 5:00 PM show\t180rs\n");
                       p("enter 4 for 8:00 PM show\t180rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:   
                                 p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 180;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                            case 2:
                                   p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 180;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                             case 3:
                                     p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 180;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                             case 4:
                                     p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 180;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                       }
                       break;
                case 2 :
                       p("THOR RAGNAROCK\n ");
                       p("enter 1 for 8:00 AM show\t200rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t200rs\n");
                       p("enter 4 for 8:00 PM show\t200rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                   p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 200;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                            case 2:
                                   p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 200;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                            case 3:
                                   p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 200;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                            case 4:
                                   p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 200;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;            

        
                       }
                       break;
                case 3 :
                       p("DR.STRANGE \n");
                       p("enter 1 for 8:00 AM show\t1200rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t200rs\n");
                       p("enter 4 for 8:00 PM show\t200rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                            case 1:
                                   p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 200;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                            case 2:
                                   p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 200;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;      
                            
                            case 3:
                                   p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 200;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                            case 4:
                                   p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 200;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                       }
                       break;
                case 4 :
                       p("AVENGERS END GAME \n");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t180rs\n");
                       p("enter 3 for 5:00 PM show\t180rs\n");
                       p("enter 4 for 8:00 PM show\t1800rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                   p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 180;
                            
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                            case 2:
                                 p("\t\t\tenter how many seat you need for this show= ");
                                 s("%d",&seat);
                                 p("you have selected %d seat \n");
                                 bill += 180;
                                 
                                 p("press 1 for select more seat\n");

                                 p("press 2 for bill\n");

                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                      {
                                        case 1:
                                               goto tmp;
                                               break;
                                        case 2:
                                               break;
                                        
                                      }
                                  break;
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                





            }
                break;
        case 2:
            p("enter 1 for PHIR HERA PHERI\t\n");
            p("enter 2 for GOLMAL AGAIN\t\n");
            p("enter 3 for MS.DHONI\t\n");
            p("enter 4 for 3 IDIOTS\t\n");
            p("Enter Your Choice=");
            s("%d",&n);
            switch(n)
            {
                case 1 :
                       p("PHIR HERA PHERI\n ");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                case 2 :
                       p("GOLMAL AGAIN\n ");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                case 3 :
                       p("MS.DHONI\n ");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                case 4 :
                       p("3 IDIOTS \n");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                





            }
                break;
        case 3:
            p("enter 1 for RRR\t\n");
            p("enter 2 for PUSHPA\t\n");
            p("enter 3 for KGF 2\t\n");
            p("enter 4 for SHIVAJI THE BOSS\t\n");
            p("Enter Your Choice=");
            s("%d",&n);
            switch(n)
            {
                case 1 :
                       p("RRR\n");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                case 2 :
                       p("PUSHPA\n ");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                case 3 :
                       p("KGF 2 \n");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                case 4 :
                       p("SHIVAJI THE BOSS \n");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*180);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*200);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*240);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*260);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                





            } 
                break;
        case 4:
            p("enter 1 for SHU THYU ?\t\n");
            p("enter 2 for CHHELO DIVAS\t\n");
            p("enter 3 for GUJJUBHAI THE MOST WANTED\t\n");
            p("enter 4 for CHAL JIVI LAIYE\t\n");
            p("Enter Your Choice=");
            s("%d",&n);
            switch(n)
            {
                case 1 :
                       p("SHU THYU ? \n");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                case 2 :
                       p("CHHELO DIVAS\n");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                case 3 :
                       p("GUJJUBHAI THE MOST WANTED\n");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                case 4 :
                       p("CHAL JIVI LAIYE\n");
                       p("enter 1 for 8:00 AM show\t180rs\n");
                       p("enter 2 for 10:00 AM show\t200rs\n");
                       p("enter 3 for 5:00 PM show\t220rs\n");
                       p("enter 4 for 8:00 PM show\t240rs\n");
                       p("please Enter your choice ");
                       s("%d",&n);
                       switch(n)
                       {
                           case 1:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                  break;
                            case 2:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break; 
                             case 3:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;
                             case 4:
                                 p("press 1 for select 1 seat\n");
                                 p("%d",1*n);
                                 p("press 2 for select 2 seat\n");
                                 p("%d",2*n);
                                 p("press 3 for select 3 seat\n");
                                  p("%d",3*n);
                                 p("press 4 for select 4 seat\n");
                                  p("%d",4*n);
                                 p("enter your require seat :");
                                 s("%d",&n);
                                 switch(n)
                                 {
                                     case 1:
                                            p("you selected 1 seat for above show");
                                            break;
                                     case 2:
                                           p("you selected 2 seat for above show");
                                           break;
                                     case 3:
                                            p("you selected 3 seat for above show");
                                            break;
                                     case 4:
                                            p("you selected 4 seat for above show");
                                            break;        
                                              
                                 }
                                 break;               
                       }
                       break;
                





            }                 
  }

}