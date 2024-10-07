#include<stdio.h>


main()
{
	int n,i;
	printf("Enter the Number element:");
	scanf("%d",&n);
	
	int array[n];
	printf("\n\nArray Input\n\n");
	for(i=0;i<n;i++)
	{
		printf("a [%d]=:",i);
		scanf("%d",&array[i]);
	}
	printf("\n\nArray Output \n\n");
	for(i=0;i<n;i++)
	{
	
	  printf("a[%d]= %d\n" ,i,array[i]);
    }
    printf("Length of an Array :%d\n",n);
}

