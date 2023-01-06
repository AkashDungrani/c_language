#include<stdio.h>
main()
{
    int n,i;
    printf("enter the number=");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        i--;
    }
}