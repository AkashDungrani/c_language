#include<stdio.h>
int sum(int a[],n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int a[100],i,n,ans;
    printf("enter size of array=");
    scanf("%d",&n);

    printf("enter elements in array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ans=sum(a,n);
    printf("sum of array is = %d",ans);


}