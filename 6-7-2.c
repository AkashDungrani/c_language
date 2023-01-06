#include<stdio.h>
main()
{
    int n,a;
    printf("enter the number=");
    scanf("%d",&n);
    a=n*n;

    int *ptr;
    ptr=&a;
    printf("square of %d=%d",n,*ptr);

}