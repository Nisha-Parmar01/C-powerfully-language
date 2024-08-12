#include <stdio.h>
#include <conio.h>

main()
{
    int h;
    clrscr();
	printf("press the 1 for English :\n");
	printf("press the 2 for Hindi   :\n");
	printf("press the 3 for Gujrati :\n");

	printf("Enter the any number:");
	scanf("%d",&h);

	switch(h)
	{
		case 1:
		   clrscr();
		   printf("press the 1 for internet Recharge");
		   break;
		case 2:
		   clrscr();
		   printf("press the 2 for Top-up Recharge");
		   break;
		case 3:
		   clrscr();
		   printf("press the 3 for Special Recharge");
		   break;
		default:
		   clrscr();
		   printf("invalid.....");
		}
    getch();
}