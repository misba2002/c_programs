#include<stdio.h>

int main()
{
    int n,flag=1;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n==1)
    {
       printf("%d is not a prime no!\n", n);
       return 0;  
    }

    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            printf("%d is not a prime no!\n", n);
            flag=0;
            break;
        }
        i++;

    }
    if(flag==1)
    {
        printf("%d is a prime no\n", n);
    }
}