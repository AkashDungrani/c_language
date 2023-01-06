#include<stdio.h>
#include<string.h>
main()
{
    char nm[200];
    char ab[200];
    int i,l=0,d=0,k=0,g=0;

    printf("enter your email id= ");
    gets(nm);

    printf("enter your password=");
    gets(ab);

    for(i=0;nm[i]!='\0';i++)
    {
        if(nm[i]=='.com')
        {
            l++;
        }
        else if(nm[i]=='@')
        {
            d++;
        }
        else if(nm[i]>=97 && nm[i]<=122)
        {
            k++;
        }
    }
    for(i=0;ab[i]!='\0';i++)
    {
        if(nm[i]>=65 && nm[i]<=90 || nm[i]>=97 && nm[i]<=122)
        {
            l++;
        }
        else if(nm[i]>='1' && nm[i]<='9')
        {
            d++;
        }
        else
        {
            k++;
        }
    }
    if(l==1 && d==1 && k==0)
    {
        printf("your email id and password is valid");
    }
    else
    {
        printf(" your email id and pawword is not valid");
    }
}