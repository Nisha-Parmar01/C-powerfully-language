#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,n;
	clrscr();
	printf("Enter the any number");
	scanf("%d",&n);
	while(n>=a)
	{
	   if(n%2!=0)
	   {
	     printf("%d\t",n);

	   }
	   n--;
	 }
	 getch();





}