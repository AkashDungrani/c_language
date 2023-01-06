#include<stdio.h>
#define p printf

main()
{
    int a;
    char n;
    
    p("enter the number=");
    scanf("%d",&a);
    scanf("%c",&n);
    

    if (a>=0 && a<=9)
    {
      p("The Character Is Digit");
    }
    else if(n>='a' && n<='z')
    {
        p("the character is small alphabate");
    }
    else if(n>='A' && n<='Z')
    {
        p("the charcter is capital alphabate");
    }
    else
    {
        p("the input is symbol");
    }
    
}