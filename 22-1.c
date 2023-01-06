#include<stdio.h>
main()
{
    int i,n;
    printf("enter the number of student=");
    scanf("%d",&n);

    int stud[n];
    for(i=0;i<n;i++)
    {
        printf("enter stud %d marks = ",i+1);
        scanf("%d",&stud[i]);
    }
    printf("\nRoll no.\tMarks\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%d\n",i+1,stud[i]);
    }
}