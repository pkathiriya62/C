#include <stdio.h>

int fibonacci(int num)
{

    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }

    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i));
    }

    return 0;
}
