#include<stdio.h>

main()
{
	int row,col;
	printf("Enter the row:");
	scanf("%d",&row);
	printf("Enter the col:");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	printf("\n\n 2D Array input \n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
				printf("Enter a[%d][%d] :",i,j);
		        scanf("%d",&a[i][j]);
		}
		printf("\n");
    }
    printf("\n\n 2D Array output \n\n");
    int large;
    large=a[0][0];
    for(i=0;i<row;i++)
    {
    	for(j=0;j<col;j++)
    	if(a[i][j]>large)
    	{
    		large = a[i][j];
		}
	}
	printf("the largest element: %d",large);
}
