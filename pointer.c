#include<stdio.h>

int main()
{
    int a,b;
    int *pa=&a, *pb=&b;

    printf("enter thr value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("Adrres of a is: %p \n", &a);
    printf("Adrres of b is: %p \n",&b);
    printf("value of pointer a is: %p \n", pa);
    printf("value of  pointer b: %p \n", pb);
    printf("\n");
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);
    printf("Value of a through pointer pa is %d\n", *pa);
    printf("Value of b through pointer pb is %d\n", *pb);



    
}