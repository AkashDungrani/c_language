#include<stdio.h>
int fact(int n)
{
  if(n<=1)
  {
      return 1;
  } 
  else
  {
      return n*fact(n-1);
  } 

}
void main()
{
    int a,ans;
    printf("A=");
    scanf("%d",&a);
    ans=fact(a);
    printf("answer =%d",ans);
}