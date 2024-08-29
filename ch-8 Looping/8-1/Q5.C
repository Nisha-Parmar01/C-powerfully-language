#include<stdio.h>
#include<conio.h>

main()
{
	  int a,n;
	  clrscr();
	      printf("Enter the first number:");
	      scanf("%d",&a);
	      printf("Enter the second number: ");
	      scanf("%d",&n);
	      while(a<=n)
	      {
		if(a%4==0)
		{
		    printf("%d\t",a);

		}
		a++;

	      }
	      getch();




}