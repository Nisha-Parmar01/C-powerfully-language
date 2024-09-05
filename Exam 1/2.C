#include<stdio.h>
#include<conio.h>

main()
{
    int x, y , z;
    clrscr();
		printf("Enter the vaule x:");
		scanf("%d",&x);
		printf("Enter the vaule y:");
		scanf("%d",&y);
		printf("Enter the vaule z:");
		scanf("%d",&z);
		if(x<y)
		{

		  printf("%d",x);
		}
		else if (y<z)
		{
		  printf("%d",y);

		}
				else if (x<z)
		{
		  printf("%d",z);

		}


    getch ();






}