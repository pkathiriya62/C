#include<stdio.h>
#include<conio.h>
void main()
{
  char a=65,b=90;
  clrscr();
  do
  {
  printf("%c\t",a);
  printf("%c\t",a+32);
  a++;

  }
  while(a<=b);
  getch();
}