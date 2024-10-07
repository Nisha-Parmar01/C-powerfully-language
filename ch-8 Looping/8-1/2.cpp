#include<stdio.h>

main()
{
	int a[4][2];
	
	a[0][0] =10;
	a[0][1] =20;
	a[1][0] =30;
	a[1][1] =40;
	a[2][0] =50;
	a[2][1] =60;
	a[3][0] =70;
	a[3][1] =80;
	a[4][0] =90;
	a[4][1] =100;
	int i,j;
	printf("[ \n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("\t%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("]");
}

