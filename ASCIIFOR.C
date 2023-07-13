#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=0;i<26;i++)
{
printf("%c=%d  |  %c=%d\n",'A'+i,'A'+i,'a'+i,'a'+i);
}
getch();

}