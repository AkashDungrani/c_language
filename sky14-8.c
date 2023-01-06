#include<stdio.h>
main()
{
    long long int n,fact=1;
    printf("enter the number =");
    scanf("%lld",&n);
    do
    {
        fact=fact *n;
        n--;
    }while(n>=1);
    printf("factoriyal=%lld",fact);
    
}