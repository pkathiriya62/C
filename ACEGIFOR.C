#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=1;i<=26;i++)
{
if(i%2==1)
{
printf("%c\n",'a'+i-1);
}
}
getch();
}