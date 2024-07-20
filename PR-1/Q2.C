#include<stdio.h>
#include<conio.h>

main()
{
      int Bs,H, D,T ,ans;

      clrscr();
      printf("Enter the Base salary:");
      scanf("%i",&Bs);
      printf("Enter the HRA:");
      scanf("%i",&H);
      printf("Enter the DA:");
      scanf("%i",&D);
      printf("Enter the TA:");
      scanf("%i",&T);
      ans=Bs+(Bs*H/100)+(Bs*D/100)+(Bs*T/100);
      printf("The gross salary:%i",ans);
      getch();

}




