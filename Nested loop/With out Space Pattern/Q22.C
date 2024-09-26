#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	char ch='A';
	clrscr();
	for(i=1;i<=5;i++)
	{
	  for(j=1;j<=i;j++)
	  {

	      printf("%c",ch);
	      ch++;
	  }
	      printf("\n");

	}
	getch();
}
