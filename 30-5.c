#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][100];
    int i,j,count=0;

    for(i=0;i<5;i++)
    {
        printf("a %d= ",i+1);
        gets(a[i]);
    }
    for(i=0;i<5;i++)
    {
        
        for(j=0;a[i][j]!='\0';j++)
        {
            if(a[i][j]>=65 && a[i][j]>=90)
            {
                count++;
            }
            else if(a[i][j]>=97 && a[i][j]<=122)
            {
                count++;
            }
        }
        
    }
    printf("total character  is = %d",count);
    return 0;
}