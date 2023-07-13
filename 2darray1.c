#include <stdio.h>

int main()
{
	int a[3][3]={1,2,3,4,5,6,7,8,9},i ,j;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(a[i][j]!=4 && a[i][j]!=9)
			{
				printf("%d ",a[i][j]);
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
}