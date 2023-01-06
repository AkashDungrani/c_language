#include<stdio.h>
int main(){
    int a,b;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    
    scanf("%d",&b);
    
    printf("sub=%d\n",a+b);
    printf("sum=%d\n",a-b);
    printf("mul=%d\n",a*b);
    printf("div=%d\n",a/b);
    printf("mod=%d\n",a%b);
    return 0;
}