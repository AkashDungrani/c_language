#include<stdio.h>
#include<string.h>
main()
{
    char nm[200];
    int i,l=0,d=0,p=0;

    printf("enter the password= ");
    gets(nm);
    
    for(i=0;nm[i]!='\0';i++)
    {
        if(nm[i]>=65 && nm[i]<=90 || nm[i]>97 && nm[i]<=122)
        {
            l++;
        }
        else if(nm[i]>='1' && nm[i]<='9')
        {
            d++;
        }
        else
        {
            p++;
        }
    }
    printf("%d\n",l);
    printf("%d\n",d);
    printf("%d\n",p);
    if(l>=1 && d>=1 && p>=1)
    {
        printf("your password is valid");
    }
    else
    {
        printf("something went wrong,please try again.....");
    }
}