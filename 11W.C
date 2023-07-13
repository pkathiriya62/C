#include<stdio.h>
#include<conio.h>
void main()
{
  int a=1,n,k=0;
  clrscr();
  printf("enter n:");
  scanf("%d",&n);

  while(a<=n)
  {
  k+=a;
  printf("%d\t",a);
  a++;

  }
  printf("your sum:%d",k);
  getch();
}