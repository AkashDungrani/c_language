#include<stdio.h>
main()
{
    int i,n,count=0;
    printf("enter the value=");
    scanf("%d",&i);
    n=i;
    while(n!=0)
              {
                  n=n/10;
                  count++;
              }
    printf("number of digit in %d = %d",i,count);          
}