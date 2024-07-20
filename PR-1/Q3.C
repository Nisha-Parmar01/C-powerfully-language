#include<stdio.h>
#include<conio.h>

main()
{
   int x,y,ans;

   clrscr();
   printf("Enter the frist angle:");
   scanf("%d",&x);
   printf("Enter the second angle:");
   scanf("%d",&y);
   ans=180 - (x+y);
   printf("The third angle:%d",ans);
   getch();








}