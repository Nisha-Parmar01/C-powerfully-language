#include<stdio.h>
#include<conio.h>

main()
{
    int n, length=0;
    clrscr();
	printf("Enter the any number:");
	scanf("%d",&n);
    while(n!=0)
    {
	  n=n/10;
	  length++;
    }
    printf("%d",length);
    getch();

}