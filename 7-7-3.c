#include<stdio.h>
toggle()
{
    int i,j;
    char s[200];
    printf("enter the string=");
    scanf("%s",&s);
    char *ptr1[100],*ptr2[100];
    for(i=0;i!='\0';i++)
    {
        ptr1[i]=&s[i];
        ptr2[i]=&s[i]; 
    }
    for(i=0;i!='\0';i++)
    {
        printf("%c",s[i]);
    }
    for(i=0;i!='\0';i++)
    {
        if(i<=64 && i>=90)
        {
            printf("%c",*ptr1-32);
        }
        else if(i<=97 && i>=120)
        {
            printf("%c",*ptr2-32);
        }
    }

}
main()
{
    toggle();
}