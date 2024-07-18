#include<stdio.h>
#include<conio.h>

main()
{

      int x,y,ans;
      clrscr();
      printf("Enter the first number:");
      scanf("%d",x);
      printf("Enter the second number:");
      scanf("%d",y);
      ans=(x*x*x)+(3*x*y)+(3*x*y)+(y*y*y);
      printf("Enter the the formula:%d",ans);
      getch();


}

