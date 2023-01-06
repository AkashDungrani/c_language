#include<stdio.h>

void cube(int a)
{
    printf("cube = %d",a*a*a);
    scanf("%d",&a);
}
void main()
{
    int x;
    printf("enter the number=");
    scanf("%d",&x);
    cube(x);
}