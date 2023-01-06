#include<stdio.h>
#include<string.h>
main()
{
    int i;
    char a[200];
    printf("enter the string: ");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            printf("%c",a[i]+32);
        }
    }
}