#include <stdio.h>

int marks[3][3];
int total[3];
float percentage[3];

int calculateTotal(int student, int subject)
{
    if (subject == 0)
    {

        return marks[student][subject];
    }                  
    else
    {

        return marks[student][subject] + calculateTotal(student, subject - 1);
    }
}

void calculateStudent(int student)
{
    if (student == 0)
    {

        total[student] = calculateTotal(student, 2);
        percentage[student] = total[student] / 3.0;
    }
    else
    {

        calculateStudent(student - 1);
        total[student] = calculateTotal(student, 2);
        percentage[student] = total[student] / 3.0;
    }
}

int main()
{

    printf("Enter marks for each student and subject:\n");

    printf("Student 1, Subject 1: ");
    scanf("%d", &marks[0][0]);

    printf("Student 1, Subject 2: ");
    scanf("%d", &marks[0][1]);

    printf("Student 1, Subject 3: ");
    scanf("%d", &marks[0][2]);

    printf("Student 2, Subject 1: ");
    scanf("%d", &marks[1][0]);

    printf("Student 2, Subject 2: ");
    scanf("%d", &marks[1][1]);

    printf("Student 2, Subject 3: ");
    scanf("%d", &marks[1][2]);

    printf("Student 3, Subject 1: ");
    scanf("%d", &marks[2][0]);

    printf("Student 3, Subject 2: ");
    scanf("%d", &marks[2][1]);

    printf("Student 3, Subject 3: ");
    scanf("%d", &marks[2][2]);

    calculateStudent(2);

    printf("\nTotal and Percentage:\n");
    printf("Student 1: Total = %d, Percentage = %f%f\n", total[0], percentage[0]);
    printf("Student 2: Total = %d, Percentage = %f%f\n", total[1], percentage[1]);
    printf("Student 3: Total = %d, Percentage = %f%f\n", total[2], percentage[2]);

    return 0;
}
