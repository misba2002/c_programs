#include<stdio.h>

int main()
{
    int n, square, sum=0, l_d;

    printf("Enter the value :");
    scanf("%d", &n);

    square=n*n;

    printf("square of %d is %d\n",n, square);

    while(square>0)
    {
        l_d=square%10;
        sum+=l_d;
        square=square/10;
        
    }

    if(n==sum)
    {
        printf("%d is a neon number\n", n);
    }
    else printf("%d is not a neon number as sum is %d\n", n, sum);

}