// AN PRG TO PRINT PRIME NO FROM 1 TO N;

#include<stdio.h>

int main()
{
    int n, flag;

    printf("enter the n:");
    scanf("%d", &n);

    if(n==1)
    {
       printf("%d is not a prime no!\n", n);
       return 0;  
    }

    for(int i=2; i<=n; i++)
    {
        flag=1;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d ", i);
        }
    }


}