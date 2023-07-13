#include<stdio.h>

int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={4,5,6,9,8,7,1,2,3},i,j;
	
	for(i=0; i<3; i++)
	{	
		for(j=0; j<3; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	for(i=0; i<3; i++)
	{	
		for(j=0; j<3; j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i=0; i<3; i++)
	{	
		for(j=0; j<3; j++)
		{
			printf("%2d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}

}