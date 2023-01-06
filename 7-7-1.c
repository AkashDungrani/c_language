#include<stdio.h>
revers()
{
    int n,i;
    printf("enter number of element=");
    scanf("%d",&n);
    int a[n];
    int *ptr[n];

    for(i=0;i<n;i++)
    {
        ptr[i]=&a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("enter a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("a[%d]=%d\n",i,*ptr[i]);
    }

}
void main()
{
    revers();
}