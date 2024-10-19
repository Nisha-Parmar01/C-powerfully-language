#include<stdio.h>
 
	 Even( int n)
	{
		if(n%2==0)
		{
			printf("%d is the even number",n);
		}
		else
		{
			printf("%d is the odd number",n);
		}
	
	}


void main()
{
	int n;
 	printf("Enter The any number:");
 	scanf("%d",&n);
 	
 	Even(n);
 
}

