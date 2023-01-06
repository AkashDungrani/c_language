#include<stdio.h>
main()
{
    int i,j,k=1;
    for(i=1;i<=5 ;i++)
    {
      for(j=i;j>=1 ;j-- )
      {
      printf("%c ",k+64);
      k++;
      }
      printf("\n");
    }

}