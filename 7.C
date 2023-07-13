#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
char k='A';
clrscr();
for(i=65;i<=69;i++)
{
for(j=65;j<=69;j++)
{
 printf("%c\t",k++);
}
printf("\n");
}
getch();

}