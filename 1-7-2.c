#include<stdio.h>

int  div()
{
    int a;
    printf("enter the number=");
    scanf("%d",&a);
    if(a%3==0 && a%5==0)
    {
        printf("the number is divided by 3 & 5");
    }
    else
    {
        printf("the number is not divided by 3 & 5");
    }

}
void main()
{ 

    div();

}