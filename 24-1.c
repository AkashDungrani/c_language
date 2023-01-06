 #include<stdio.h>

 
 main()
{
    int i,n;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
    int a[n];
 
    printf("Enter number in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("\nAll negative number in array are : ");
    for(i=0; i<n; i++)
    {
         
        if(a[i] < 0)
        {
            printf("%d\t", a[i]);
        }
    }
 
    
}