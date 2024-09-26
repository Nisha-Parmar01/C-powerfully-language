#include<stdio.h>
#include<conio.h>

main()
{
	char j,i;
	clrscr();
	for(i='A';i<='E';i++)
	{
	  for(j='A';j<=i;j++)
	  {
	     printf("%c",j);
	  }

	    printf("\n");
	}
	 getch();
}
