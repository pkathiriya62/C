#include<stdio.h>
#include<conio.h>
void main()
{
int i,k=1,n;
clrscr();
printf("enter number of loop:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d\t",k);
k=k*2;
}
getch();

}