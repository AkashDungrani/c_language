#include<stdio.h>
main()
{
    long long int n,fact=1;
    printf("enter the number =");
    scanf("%lld",&n);
    while(n>=1)
    {
        fact=fact *n;
        n--;
    }
    printf("factoriyal=%lld",fact);
    
}