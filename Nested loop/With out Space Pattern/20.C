#include<stdio.h>
#include<conio.h>

main()
{
	 int i,j;
	 clrscr();
	 for(i=1;i<=5; i++)
	 {
	    for(j=i;j<=5;j++)
	    {
	      (j%2!=0)
		    ?printf("#")
		    :printf("@");
	    }
	    printf("\n");
	 }
	 getch();
}