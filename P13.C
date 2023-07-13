#include<stdio.h>
#include<conio.h>
void main()
{
char i,j;
clrscr();
for(i=0;i<5;i++)
{
for(j=0;j<=i;j++)
{
   printf("* ",i);
}
printf("\n");
}
getch();
}