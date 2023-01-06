#include<stdio.h>
#include<string.h>

char len(char a[])
{
    strlen(a);
    printf("length =%d",strlen(a));
    return 0;
}
void main()
{
    char a[500];
    printf("enter string=");
    gets(a);
    len(a);
}