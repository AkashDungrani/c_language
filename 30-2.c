#include<stdio.h>
#include<string.h>
main()
{
    char s1[200],s2[200];
    int i,n,j;
    

    printf("enter the name =");
    gets(s1);

    strcpy(s2,s1);
    strrev(s1);
    
    printf("%s",s1);

    if(strcmp(s1,s2)==0)
    {
        printf(" string is palindrom");
    }
    else 
    {
        printf("string is not palindrom");
    }
}