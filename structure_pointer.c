#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
};
void print(struct student *s)
{
    s -> id = 101;
    strcpy(s->name, "misba");
    
    printf("name is %s\n, id is %d\n", s -> name, s -> id);
}
int main()
{
    struct student info;
    print(&info);
}
