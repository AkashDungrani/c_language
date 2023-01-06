#include<stdio.h>
main()
{
    int i,n,j,count;
    printf("enter the size of array=");
    scanf("%d",&n);

    int a[n],freq[n];
    
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }

    printf("---------------print a----------------\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("--------------frequency print---------\n");

    for(i=0;i<n;i++)
    {
        count=1;
        
            for(j=i+1;j<n;j++)
            {
                
                   count++;
                   freq[j];
                
            }
            if(freq[i]!=0) 
            {
              freq[j]=count;
            }   
        
        for(i=0;i<n;i++)
        {
            
            
                printf("%d is %d times \n",a[i],freq[i]);
            
        }
    }
}