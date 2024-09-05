#include<stdio.h>
#include<conio.h>

main()

{
    int a, b , ans;
    clrscr();
	printf("Enter the value A:");
	scanf("%d",&a);
	printf("Enter the value B:");
	scanf("%d",&b);

	ans = (a*a)+(2*a*b)+(b*b);

	printf("The formula %d",ans);
	getch();






}