#include<stdio.h>

int main()
{
	char a[30],b[30];
	int i,j,n,k=0,m=0;

	printf("enter name:");
	scanf("%s",&a);
	
	for(i=0; a[i]!='\0'; i++);
	
	n=i;
	j=n-1;
	for(i=0; i<=n-1; i++)
	{	
		if(i%2==0)
		{
			b[m]=a[k];
			k++;
			m++;
		}		
		else
		{
			b[m]=a[j];
			m++;
			j--;
		}	
	}
	b[m]='\0';
	printf("your string:%s",b);
	return 0;
}
