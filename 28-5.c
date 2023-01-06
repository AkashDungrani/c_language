#include<stdio.h>
#include<string.h>
main()
{
    int i,len;
    char a[200];
    printf("enter the string: ");
    gets(a);
    printf("size= %d\n\n",strlen(a));
    len=strlen(a);
    for(i=0;i<strlen(a);i++)
    {
        if(i==0)
        {
            printf("%c",a[i]-32);
        }
        else if(a[i]>=97&&a[i]<=122)
        {
          printf("%c",a[i]);
        }
    }
}