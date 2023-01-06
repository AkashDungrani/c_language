#include <stdio.h>
#include <string.h>
 
int main()
{
  	char nm[100];
  	int i, j, k;
 
  	printf("\n Please Enter any String :  ");
  	gets(nm);
  	 	
  	for(i = 0; i < strlen(nm); i++)
  	{
  		for(j = i + 1; nm[j] != '\0'; j++)
  		{
  			if(nm[j] == nm[i])  
			{
  				for(k = j; nm[k] != '\0'; k++)
				{
					nm[k] = nm[k + 1];
				}
 			}
		}
	}
	
	printf("\n The string after removiing repeating letter = %s ", nm);
	
  	return 0;
}