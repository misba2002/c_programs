#include<stdio.h>
void tower_of_hanoi(int n, char A, char B, char C)
{
    if(n==1)
    {
        printf("%c -> %c \n",A,C);
        return;
    }
    tower_of_hanoi(n-1,A,C,B);
    tower_of_hanoi(1,A,B,C);
    tower_of_hanoi(n-1,B,A,C);

}
int main()
{
    int disc;
    printf("Enter disc size:");
    scanf("%d", &disc);
    if(disc==0)
    {
        printf("Invalid input disc cannt be 0\n");
        return 0;
    }
    printf("Moves are:\n");
    tower_of_hanoi(disc,'A','B','C');
    return 0;

}