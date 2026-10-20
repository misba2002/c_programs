#include<stdio.h>
struct student 
{
    char name[20];
    float marks;
    int roll_no;
};
 void highest_marks( struct student *s,int size)
 {
    float high=s[0].marks;
    int found_index=0;

    for(int i=0; i<size; i++)
    {
        if(s[i].marks > high)
        {
            high = s[i].marks;
        }
    }
    for(int i=0; i<size; i++)
    {
        if(high == s[i].marks)
        {
            printf("Student with highest marks: %s\nRoll number: %d", s[i].name, s[i].roll_no);
            return;
        }
    }
 }

int main()
{
    int size;
    printf("Enter no of students:");
    scanf("%d", &size);

    struct student s[size];

    for(int i=0; i<size; i++)
    {
        printf("Enter name marks and roll no :");
        scanf("%s%f%d", s[i].name, &s[i].marks, &s[i].roll_no);
    }
 
     highest_marks(s, size);

}