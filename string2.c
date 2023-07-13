#include<stdio.h>

int main()
{
char a[30],b[30];
int i,j;

printf("enter first name: ");
scanf("%s",&a);

printf("enter second name: ");
scanf("%s",&b);

for(i=0;a[i]!='\0';i++)
{}

a[i] = ' ';
i++;


for(j=0;b[j]!='\0';j++)
{

a[i]=b[j];
i++;

}

a[i]='\0';
printf("full name is:%s",a);
return 0;

}