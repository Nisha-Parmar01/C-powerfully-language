#include<stdio.h>


main()
{
	int size;
	printf("Enter the Number element:");
	sacnf("%d",&size);
	
	int i;
	printf("\n\nArray Input\n\n");
	for(i=0;i<size;i++)
	{
		printf("Eneter the %d element:",i+1);
		sacnf("%d",&a[i]);
	}
	printf("\n\nArray Output \n\n");
	for(i=0;i<size;i++)
	  printf("%d\t",a[i]);

}

