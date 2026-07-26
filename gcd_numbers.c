#include<stdio.h>

int main()
{
    int n1, n2, largest=0, smallest_value;

    printf("Enter the vlaue n1 and n2: ");
    scanf("%d%d", &n1, &n2);

    smallest_value=(n1<n2)?n1:n2;

    if(n1==0)
    {
       printf("GCD(gretest common factor) of %d and %d is %d\n",n1, n2, n2);
       return 0;  
    }
    else if(n2==0)
    {
         printf("GCD(gretest common factor) of %d and %d is %d\n",n1, n2, n1);
         return 0;
    }

    for(int i=1; i<=smallest_value; i++ )
    {
        if((n1%i==0) && (n2%i==0))
        {
            if(largest<i)
            largest=i;

        }
    }
    printf("GCD(gretest common factor) of %d and %d is %d\n",n1, n2, largest);


    
}