#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks[3];
};

int calculate_total(struct Student s)
{
    return s.marks[0] + s.marks[1] + s.marks[2];
}

float calculate_average(int total)
{
    return total / 3.0;
}

char calculate_grade(float average)
{
    if (average >= 90)
        return 'A';
    else if (average >= 75)
        return 'B';
    else if (average >= 60)
        return 'C';
    else if (average >= 50)
        return 'D';
    else
        return 'F';
}

int main()
{
    struct Student s;
    int total;
    float average;

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks for 3 subjects:\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &s.marks[i]);
    }

    total = calculate_total(s);
    average = calculate_average(total);

    printf("\nStudent Details\n");
    printf("-------------------------\n");
    printf("Name    : %s\n", s.name);
    printf("Roll No : %d\n", s.roll_no);
    printf("Total   : %d\n", total);
    printf("Average : %.2f\n", average);
    printf("Grade   : %c\n", calculate_grade(average));

    return 0;
}