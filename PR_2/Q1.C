#include<stdio.h>
#include<conio.h>

main()
{
     int n;
     clrscr();
     printf("Enter the marks:");
     scanf("%d",&n);



     (n>=91  &&   n<=100)
	    ?printf("your grade is A")
	    :
	      (n>81 && n<90)
	      ?printf("your grade is B")
	      :
		(n>=71 && n<=80)
		?printf("your garde is C")
		:
		  (n>=61 && n<=70)
		  ?printf("your garde is D")
		  :
		    (n>=51 && n<=60)
		     ?printf("your grade is E")
		     :
		      (n>=34 && n<=50)
		       ?printf("your garde is f")
		       :printf("sorry you are fail");




     getch();
}
