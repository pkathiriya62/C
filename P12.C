#include<stdio.h>
#include<conio.h>
void main()
{
char i,j;
clrscr();
for(i=0;i<5;i++)
{
for(j=i;j>=0;j--)
{
   printf("%c ",j+65);
}
printf("\n");
}
getch();
}