// AN PROGRAM TO FIND FACTORIAL OF NATURAL NUMNERS UPTO N;
#include<stdio.h>

int main()
{
    int n,fact=1;
    
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--)
    {
        fact=1;
        for(int j=i; j>=1; j--)
        fact=fact*j;

        printf("factorial of a number %d is %d\n",i,fact);

    }
   

}