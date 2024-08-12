#include<stdio.h>
#include<conio.h>

main()
{
      float Maths,English,Science,ans;
      clrscr();

      printf("Enter the Maths mark:");
      scanf("%f",&Maths);

      printf("Enter the English mark:");
      scanf("%f",&English);

      printf("Enter the Science mark:");
      scanf("%f",&Science);
      clrscr();
      ans=((Maths+English+Science)/300)*100;
      printf("you have got %.2f",ans);
      getch();










}

