#include<stdio.h>
main()
{
    int i,n,f,l;
    printf("enter a number =");
    scanf("%d",&i);
    n=i;
    l=i%10;
    while(i>10)
              {
                  i=i/10;
              }
    f=i;
    printf("sum of first digit & last digit %d=%d",n,f+l);          
}