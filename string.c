#include<stdio.h>

int main()
{
char str[1000];
int i;
 
printf("enter the string: ");
scanf("%s",&str);

for(i=0;str[i] != '\0';++i);

printf("length of str is:%d\n",i);

return 0;
}