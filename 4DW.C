#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter n:");
scanf("%d",&n);
i=n;
do
{
printf("%d\t",i);
i--;
}
while(i>=1);
getch();


}