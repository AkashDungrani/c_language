#include<stdio.h>
table()
{
    int n,i,j;
    printf("enter the number of table you want=");
    scanf("%d",&n);
    int *ptr;
    ptr=&n;
    for(i=1;i<=10;i++)
    {
        printf("%d  %d  %d\n",*ptr,i,*ptr*i);
    }
}
main()
{
    table();
}