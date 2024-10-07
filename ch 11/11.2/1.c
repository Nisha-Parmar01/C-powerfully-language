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
	printf("\n\n Array Input \n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n Array output \n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
		
		
	}
	int sum=0;
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				sum =sum +a[i][j];
			}
			
		}
	printf("\n\n");
			printf("Array sum : %d\n\n",sum);
			printf("Array Avg :%.2f",(float)sum/(row*col));
}
