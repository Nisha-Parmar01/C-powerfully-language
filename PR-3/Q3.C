#include<stdio.h>
#include<conio.h>

main()
{
      int n,digit,sum=0;
      clrscr();
	  printf("Enter the any number:");
	  scanf("%d",&n);
	    digit=n%0;
	    while(n<=10)
	    {
	     n=n/10;

	    }
	    sum = n+digit;
	    printf("%d + %d =%d",n,digit,sum);
	    getch();


}




