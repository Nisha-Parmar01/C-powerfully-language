#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
	  for(j=1;j<=i;j++)
	  {
	   if(i==1||i==5||j==2||j==5||i==2&&j==5)
	   {
	      printf("*");
	   }
	   else
	   {
	     printf(" ");

	   }
	   }
	   printf("\n");
	 }
	 getch();
}


