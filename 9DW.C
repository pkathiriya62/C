#include<stdio.h>
#include<conio.h>
void main()
{
  char a=65,b=90;
  clrscr();
  do
  {
  printf("%c\t",a);
  printf("%d\t",a);
  a++;

  }
  while(a<=b);
  getch();
}