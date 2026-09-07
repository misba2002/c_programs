#include<stdio.h>
struct Address
{
     int zipcode;
     char state[20];

};
struct Student 
{
    int rollno;
    char name[20];
    struct Address address;

};


int main()
{
    struct Student stud1={1,"aqsa",591311, "karnataka"};
    struct Student stud2;

    printf("Enter name:");
    scanf("%s", stud2.name);
    printf("Enter roll number:");
    scanf("%d", &stud2.rollno);

    printf("Enter state:");
    scanf("%s", stud2.address.state);

    printf("Enter zipcode:");
    scanf("%d", &stud2.address.zipcode);

    printf("student 1:\nname:%s\nrollno:%d\nstate:%s\nzipcode:%d\n", stud1.name, stud1.rollno, stud1.address.state, stud1.address.zipcode);

    printf("student 2:\nname:%s\nrollno:%d\nstate:%s\nzipcode:%d\n", stud2.name, stud2.rollno, stud2.address.state, stud2.address.zipcode);


}