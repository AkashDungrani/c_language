#include<stdio.h>
main(){
    char n;
    printf("enter a alphabate=");
    scanf("%c",&n);
    if(n =='a' || n =='e'||n=='i' ||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
    {
        printf("alphabate is vowel");
    }
    else if(n>='0' && n<='9')
    {
        printf("number is digit");
    }
    
    else{
        printf("alphabate is consonante");
    }

}