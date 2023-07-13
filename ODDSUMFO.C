#include<stdio.h>

void main()
{
int i,n,total=0;

printf("enter n:");
scanf("%d",&n);
for(i=1;i<=n;i+=2)
{
total+=i;
printf("%d\t",i);
}
printf("total:%d",total);


}