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
	printf("\n\n Array input \n\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
				printf("Enter a[%d][%d] :",i,j);
		        scanf("%d",&a[i][j]);
		}
		printf("\n");
    }
    printf("\n\n Array output \n\n");
    int r,sum1=0;
        
   		 printf("Enter the number of row:");
         scanf("%d",&r);
         
    for(i=0;i<row;i++)
	{
		printf("%d",a[r][i]);
		sum1+=a[r][i];
    }
    printf("\n");
    printf("\nsum1 : %d\n",sum1);
    int c,sum2=0;
         printf("Enter the number of colum:");
         scanf("%d",&c);
	for(j=0;j<col;j++)
	{
		printf("%d",a[i][c]);
		sum2+=a[i][c];
    }
    printf("\n");
	printf("\nsum2 : %d\n",sum2);	
}


