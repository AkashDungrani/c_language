#include<stdio.h>
main()
    {
     int i,n,digit,rev=0;
     printf("enter the number=");
     scanf("%d",&n);
     i=n;
     do
     {
    digit=n%10;
    rev=(rev*10)+digit;
    n=(n/10);
     } while (n!=0);
    if(i==rev)
    {
        printf("the number is palindrom");
    } 
    else
        {
            printf("the number is not palindrom");
        }

     
    }
