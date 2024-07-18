#include<stdio.h>
#include<conio.h>

main()
{
      int b,h,ans;

      clrscr();
      printf("enter the value of b");
      scanf("%d",b);

      printf("enter the value of h");
      scanf("%d",h);

      ans = 0.5* b*h;
      printf("area of a triangle: %d",ans);
      getch();
}



