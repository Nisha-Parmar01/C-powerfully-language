#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,s;
	clrscr();
	for(i=1;i<=5;i++)
	{
	  for(j=1;j<=i;j++)
	  {
	    printf("%d",j);

	  }
	  for(s=5;s>i;s--)
	  {
	   printf("  ");
	  }
	  for(j=i;j>=1;j--)
	  {
	   printf("%d",j);
	  }
	  printf("\n");
	 }
	 getch();



}


