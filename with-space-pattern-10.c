#include<stdio.h>

/*
            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1

*/

main()
{

	
	int i,j,k;
	
	for(i=1 ; i<=5 ;i++)
	{
		for(k=5; k>=i; k--)
		{
			printf("  ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		for(j=i ; j>=1 ; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}