#include<stdio.h>
#include<conio.h>
void main()
{
char i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=0;j<i;j++)
{
   printf("%d ",(j+i)%2);
}
printf("\n");
}
getch();
}