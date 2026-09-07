#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
};

int main()
{
    struct student stud1_list[]={1,"aqsa",2,"misba",3,"rida"};
    struct student stud2_list[3];

     int size = sizeof(stud1_list) / sizeof(stud1_list[0]);

     printf("Printing array 1:");
     for(int i=0; i<size; i++)
     {
        printf("name : %s\nroll no :%d\n", stud1_list[i].name, stud1_list[i].rollno);
     }

     for(int i=0; i<3; i++)
     {
        printf("enter name:");
        scanf("%s", stud2_list[i].name);

        printf("enter rollno:");
        scanf("%d", &stud2_list[i].rollno);

     }

      printf("Printing array 2:");
     for(int i=0; i<3; i++)
     {
         printf("name : %s\nroll no :%d\n", stud2_list[i].name, stud2_list[i].rollno);
     }

}