#include<stdio.h>

int main()
{
    int n, sum=0, l_d, orig_num, fact=1;

    printf("Enter the number:");
    scanf("%d", &n);

    orig_num=n;

    while(n>0)
    {
        l_d=n%10;
        fact=1;
        for(int i=1; i<=l_d; i++)
        {
            fact=fact*i;
        }
        printf("factorial of the digit %d is %d\n",l_d, fact);
        sum+=fact;
        n=n/10;
    }
    if(orig_num==sum)
    {
        printf("%d is a strong number\n", orig_num);
    }
    else  printf("%d is not a strong number as sum of factorial of its digits is %d\n", orig_num, sum );
}
