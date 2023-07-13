#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter num:");
scanf("%d",&n);
printf("even num between 1 to %d are:\n",n);
for(i=1;i<=n;i+=1)
{
if(i%2==0)
{
printf("%d\n",i);
}
}
getch();
}