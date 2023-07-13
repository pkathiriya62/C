#include<stdio.h>
#include<conio.h>
void main()
{
int a,sum=0;
clrscr();
printf("your num is:\n");
for(a=1;a<=10;a++)
{
sum=sum+a;
printf("%d\n",a);
}
printf("your sum is:%d\n");
getch();
}