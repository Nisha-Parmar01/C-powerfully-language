
#include<stdio.h>
#include<conio.h>

main()
{
     int n;
     char h;
     clrscr();
     printf("Enter the marks:");
     scanf("%d",&n);



     if(n>=91  &&   n<=100)
     {
	h = 'A';
     }
     else if(n>=81 && n<=90)
     {
	h = 'B';
     }
     else if(n>=71  && n<=80)
     {
	h = 'C';
     }
     else if (n>=61  && n<=70)
     {
	h =  'D';
     }
     else if (n>=51   && n<=60)
     {
	h = 'E';
     }
     else
     {
       h = 'F';
     }


	    switch(h)
	    {
		case 'A':
		    printf("Excellent work!");
		    break;

		case 'B':
		    printf("Well done");
		    break;
		case 'C':
		    printf("Good job");
		    break;
		case 'D':
		    printf("You passed,but you could do better");
		    break;
		case 'E':
		    printf("you are passed, but better try next time.");
		    break;
		case 'F':
		    printf(" 'sorry you are fail' ");
		    break;
		default :
		  printf("invallid...");
	     }

     if (h>='A'&&  h<='E')
     {     printf("\n\n");
	   printf(" 'congratulation! you are eligible for the next level");
     }
     else
     {    printf("\n\n");
	  printf(" 'please try again  next time' ");
     }

      getch();


}
