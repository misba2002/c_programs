#include<stdio.h>
int main()
{
    int num;

    printf("Enter number:");
    scanf("%d", &num);

    if(num & 1)
    {
        printf("Odd number!\n");
    }
    else printf("Even number!\n");


}