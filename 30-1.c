#include<stdio.h>
#include<string.h>
main()
{
    char nm[200];
    int i,n,j,c=0;
    n=strlen(nm);
    printf("enter the string=");
    gets(nm);
    
    for(j=0;nm[j];j++)
    {
        n=j;
    }

   
    for(i=0;i<n;i++)
    {
        c=1;
        if(nm[i])
        {
            for(j=i+1;j<n;j++)
            {
                if(nm[i]==nm[j])
                {
                    c++;
                    nm[j]='\0';
                }
            }
            printf("the frequency of %c is %d \n",nm[i],c);
        }
    }
    
}