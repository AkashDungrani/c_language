#include<stdio.h>
main()
{
    int i=1,n,j=1;
   printf("enter the number=");
   scanf("%d",&n);
    do
    { 
        j=1;
        while(j<=n)
        {
        printf("%d %d %d\t",j,i,j*i);
        j++; 
        }
        printf("\n");
        i++;

    }while(i<=10);
}