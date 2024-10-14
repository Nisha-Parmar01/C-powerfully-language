#include<stdio.h>


int add(int n,int h)
{	
	return n+h;
}

int sub(int n,int h)
{	
	return n-h;
}

int mul(int n,int h)
{
	return n*h;
}

float div(float c ,float d)
{	
	return c/d;
}

int mod(int n,int h)
{	
	return n%h;
}

int main()
{
	int choice,i;
	int n,h;
	float c,d;
	
	do
	{
	
	printf("\n\n  Arithmetic Operations Calculator  \n\n");
	printf("Press 1 for Addi:\n");
	printf("Press 2 for Sub:\n");
	printf("Press 3 for Mul:\n");	
	printf("Press 4 for Div:\n");
	printf("Press 5 for Mod:\n");
	printf("Press 0 for Exit:\n");
	      printf("\n\nEnter any number:");
	      scanf("%d",&choice);
	
	switch (choice)
			{
				case 1:
					printf("Enter First  number:");
					scanf("%d",&n);
	
					printf("Enter Second  number:");
					scanf("%d",&h);
					
					printf("%d + %d = %d",n,h,add(n,h));
				break;
				
				case 2:
					printf("Enter First  number:");
					scanf("%d",&n);
	
					printf("Enter Second  number:");
					scanf("%d",&h);
					
					printf("%d - %d = %d",n,h,sub(n,h));
				break;
				
				case 3:
					printf("Enter First  number:");
					scanf("%d",&n);
	
					printf("Enter Second  number:");
					scanf("%d",&h);
					
					printf("%d * %d = %d",n,h,mul(n,h));
				break;
				
				case 4:
					printf("Enter First  number:");
					scanf("%f",&c);
	
					printf("Enter Second  number:");
					scanf("%f",&d);
					
					printf("%.2f / %.2f = %.2f",c,d,div(c,d));
				break;
				
				case 5:
					printf("Enter First  number:");
					scanf("%d",&n);
	
					printf("Enter Second  number:");
					scanf("%d",&h);
					
					printf("%d %% %d = %d",n,h,mod(n,h));
					
				break;
				
			default: 
				printf("Exitting Calculatur....");
		
			printf("\n");
				
			}
		}while(choice!=0);
		printf("\n");
}
    
	
	
	
