
#include<stdio.h>
#include<conio.h>

main()
{
   int n=20,h=30;
	   clrscr();
	   printf("Before swap \n");
	   printf("%d \n  %d",n,h);



	   n=n+h;
	   h=n-h;
	   n=n-n;
	    printf("\n \n");
	   printf("After swap \n");
	   printf("%d \n %d",n,h);

	   getch();




}