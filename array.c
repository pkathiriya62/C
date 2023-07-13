#include<stdio.h>

int main()
{

	int a[10];
        int b[]={1,2,3,4,5,6,7,8,9};
	
	for(int i=0;i<5;i++)
	{
		a[i]=11+i;
		printf("%d\n",a[i]);	
	}

	for(int i=0;i<9;i++)
	{
		printf("%d ",b[i]);

	}	

	return 0;
}