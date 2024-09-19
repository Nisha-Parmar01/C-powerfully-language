#include<stdio.h>
#include<conio.h>

main()
{
   int  i,j,s;
   clrscr();
   for(i=5; i>=1;i--)
   {
     for(s=5;s>i;s--)
     {
       printf(" ");
     }
     for(j=i;j>=1;j--)
     {
      printf("%d",j%2);

     }
     printf("\n");
   }
     getch();
}

#include<stdio.h>
#include<conio.h>

main()
{
   int  i,j,s;
   clrscr();
   for(i=5; i>=1;i--)
   {
     for(s=1;s<i;s++)
     {
       printf(" ");
     }
     for(j=5;j>=i;j--)
     {
      printf("%d",i);

     }
     printf("\n");
   }
     getch();
}
