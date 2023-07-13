#include <stdio.h>

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter 10 integers:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = sumArray(arr, size);
    printf("Sum of the array: %d\n", result);

    return 0;
}
