#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,total;
clrscr();
printf("enter n value:");
scanf("%d",&n);
for(i=2;i<=n;i+=2)
{
total+=i;
printf("%d\t",i);
}
printf("total:%d",total);
getch();

}