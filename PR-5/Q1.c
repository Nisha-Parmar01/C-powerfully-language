#include<stdio.h>

main()
{
	int size;
	printf("Enter the Number element:");
	scanf("%d",&size);
	
	int a[size];
	int i;
	printf("\n\n Array input \n\n");
	for(i=0;i<size;i++)
	{
		printf("Enter %d element :",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n\n array output \n\n");
	for(i=0;i<size;i++)
	{
		
		 if(a[i]<0)
		 {
		   printf("%d",a[i]);
	     }
	}
	printf("Negative Array From any element:",a[i]); 
	
}
