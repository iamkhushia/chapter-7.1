#include<stdio.h>

/*
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1  
*/

main()
{
	int i,j,k;
	
	for(i=1 ; i<=5 ;i++)
	{
		for(k=i ; k>1 ; k--)
		{
			printf(" ");
		}
		for(j=5 ; j>=i ; j--)
		{
		    if(j%2==1)
		    {
		    	printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}