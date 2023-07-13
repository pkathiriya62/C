#include<stdio.h>
#include<conio.h>
void main()
{
int limit,c;
clrscr();
printf("enter limit\n");
scanf("%d",&limit);
for(c=1;c<=limit;c++)
{
printf("%d+",c*c);
}
printf("\n");
getch();
}