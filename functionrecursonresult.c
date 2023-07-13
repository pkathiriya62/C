#include <stdio.h>

void calculateTotal(int marks[][3], int totals[], int student)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += marks[student][i];
    }
    totals[student] = sum;
}

void calculatePercentage(int totals[], float percentages[], int student)
{
    percentages[student] = (totals[student] / 3.0);
}

int main()
{
    int marks[3][3];
    int totals[3];
    float percentages[3];

    printf("Enter marks for each student and subject:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Student %d, Subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        calculateTotal(marks, totals, i);
        calculatePercentage(totals, percentages, i);
    }

    printf("\nTotal and Percentage:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d: Total = %d, Percentage = %.2f%%\n", i + 1, totals[i], percentages[i]);
    }

    return 0;
}
