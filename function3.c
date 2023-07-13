#include<stdio.h>

int a()

{
	int a;
	int b[]={25,10,5,2,1};

	printf("enter the amount:");
	scanf("%d",&a);

	for(int i=0; b[i]!='\0'; i++)
	{
	printf("\n%d -%d",b[i],a/b[i]);
	a = a%b[i];
	}
	return a;
}
int main()
{
	a();
}
