#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=9;i+=2)
{
for(j=1;j<=9;j+=2)
{
printf("%d\t",i);
}
printf("\n");
}
getch();
}