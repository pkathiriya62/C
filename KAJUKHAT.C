#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
for(a=1;a<=5;a++)
{
for(b=5;b>=a;b--)
{
printf(" ");
}
for(b=1;b<=a;b++)
{
printf("* ");
}
printf("\n");
}
for(a=5;a>=1;a--)
{
for(b=5;b>=a;b--)
{
printf(" ");
}
for(b=1;b<=a;b++)
{
printf("* ");
}
printf("\n");
}
getch();

}