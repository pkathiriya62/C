#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter num:");
scanf("%d",&n);
printf("\nodd num between 1 to %d are:\n",n);
for(i=1;i<=n;i+=2)
{
printf("%d\n",i);
}
getch();

}