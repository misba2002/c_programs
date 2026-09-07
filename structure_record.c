#include<stdio.h>
struct student 
{
    int marks[3];
    char name[20];
};
int main()
{
    int size;

    printf("Enter no of students : ");
    scanf("%d", &size);

    struct student s[size];

    for(int i=0; i<size; i++)
    {
        printf("Enter name of the student :");
        scanf("%s", s[i].name);

        printf("Enter P, C and M marks :");
        for(int j=0; j<3; j++)
        {
            scanf("%d", &s[i].marks[j]);
        }

    }

    printf("Name Maths Physics Chemistry\n");

    for(int i=0; i<size; i++)
    {
        printf("%s", s[i].name);
        for(int j=0; j<3; j++)
        {
            printf(" %d", s[i].marks[j]);
        }
        printf("\n");
    }

    printf("Average");
   for(int j = 0; j < 3; j++)
    {
        int sum = 0;

        for(int i = 0; i < size; i++)
        {
            sum += s[i].marks[j];
        }

        printf(" %.2f", sum / (float)size);
    }

    printf("\n");




}
