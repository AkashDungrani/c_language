#include<stdio.h>
#define p printf
#define s scanf
int sum()
{
    int a,b;
    p("A=");
    s("%d",&a);
    p("B=");
    s("%d",&b);
    p("sum = %d\n",a+b);
}
int sub()
{
    int a,b;
    p("A=");
    s("%d",&a);
    p("B=");
    s("%d",&b);
    p("sum = %d\n",a-b);
}
int mul()
{
    int a,b;
    p("A=");
    s("%d",&a);
    p("B=");
    s("%d",&b);
    p("sum = %d\n",a*b);
}
int div()
{
    int a,b;
    p("A=");
    s("%d",&a);
    p("B=");
    s("%d",&b);
    p("sum = %d\n",a/b);
}
int mod()
{
    int a,b;
    p("A=");
    s("%d",&a);
    p("B=");
    s("%d",&b);
    p("sum = %d\n",a%b);
}
void calculator()
{
    int n,a,b;
do
   {


    p("enter 1 for sum\n");
    p("enter 2 for sub\n");
    p("enter 3 for mul\n");
    p("enter 4 for div\n");
    p("enter 5 for mod\n");
    p("enter 6 for exit\n");
    p("enter your choice=");
    s("%d",&n);


    p("A=");
    s("%d",&a);
    p("B=");
    s("%d",&b);

    switch(n)
    {
        case 1:sum();
        break;
        case 2:sub();
        break;
        case 3:mul();
        break;
        case 4:div();
        break;
        case 5:mod();
        break;
    }
 }while(n!=6);

}
int main()
{
    calculator();
}