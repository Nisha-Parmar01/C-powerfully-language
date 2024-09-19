#include<stdio.h>
#include<conio.h>

main()
{
       int n,h;
       clrscr();
       for(n=5;n>=1;n--)
       {
	 for(h=5;h>=n;h--)
	 {
	   printf("%d",h);
	 }
	   printf("\n");



       }
       getch();

}