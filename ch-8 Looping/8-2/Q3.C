#include<stdio.h>
#include<conio.h>

main()
{
	int a=5,n;

	clrscr();
	printf("Enter the any number:");
	scanf("%d",&n);
	while(a<=n)
	{
	   printf("%d *%d=%d\n",a,n,a*n);
	   n++;
	}
	    printf("last value\t: %d\n",a);







}