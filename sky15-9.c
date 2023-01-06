#include <stdio.h>  
int main ()  
{ 
   int n,sum=0,m,mul,r;
   printf("enter number=");
   scanf("%d",&n);
   for(mul=1;n>0;n=n/10)
   {
       m=n%10;
       sum+=m;
       r=n%10;
       mul=mul*r;
   }
   printf("sum=%d\n",sum);
   printf("mul=%d\n",mul);
   if(sum==mul)
              {
                  printf("number is magic");
              }
    else      
              {
                  printf("number is not magic number");
              }          
}  