#include<stdio.h>
#include<conio.h>

main()
{
	 int i,j,s;
	 clrscr();
	 for(i=65;i<=69; i++)
	 {
	    for(s=69;s>i;s--)
	    {
	      printf(" ");
	    }
	    for(j=i;j>=65;j--)
	    {
	      printf("%c",j);
	    }
	      printf("\n");
	 }
	 getch();
}
