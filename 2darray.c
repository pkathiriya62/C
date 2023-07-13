#include <stdio.h>

int main()
{
	int a[2][2]={1,2,3,4},i ,j,sum=0;

	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%d ",a[i][j]);
			sum+=a[i][j];
				
		}
		printf("\n");
	}
	printf("total = %d",sum);
}