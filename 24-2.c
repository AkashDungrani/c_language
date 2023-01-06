#include <stdio.h>

void main(){
  int a[50],n,i,j=0,m1,m2;
  
       printf("\n\nFind the second largest element in an array :\n");
       printf("-------------------------------------------------\n");  
  
       printf("Input the size of array : ");
       scanf("%d", &n);
    
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
	    }

   m1=0;
  for(i=0;i<n;i++)
  {
      if(m1<a[i])
	  {
           m1=a[i];
           j = i;
      }
  }
		
   m2=0;
  for(i=0;i<n;i++)
  {
     if(i==j)
        {
          i++;  
		  i--;
        }
      else
        {
          if(m2<a[i])
	     {
               m2=a[i];
             }
        }
  }

  printf("The Second largest element in the array is :  %d \n\n", m2);
}