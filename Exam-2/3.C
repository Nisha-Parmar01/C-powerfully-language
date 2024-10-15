#include<stdio.h>

main()

{
	int n,i ,sum=0;

	
	printf("Enter the any number:");
	scanf("%d",&n);
	
	int a[i];
    printf("\n 1d Array input \n");
	for(i=0;i<n;i++)
	{
		printf("Enter the a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n 1d Array output\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			sum = sum +a[i];
		
		}
			
    }
	
	
	printf("sum of positive number: ",a[i]);
	
	
}
