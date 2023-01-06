#include<stdio.h>
main()
{
    int a,b;
    int *ptr,*ctr;
    ptr=&a;
    ctr=&b;

    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A=%d\n",*ptr);
    printf("B=%d\n",*ctr);




}