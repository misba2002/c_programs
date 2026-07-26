#include<stdio.h>

int main()
{
    int n1, n2, temp, a , b;

    printf("Enter the vlaue n1 and n2: ");
    scanf("%d%d", &n1, &n2);

    a=(n1>n2)?n1:n2;
    b=(n1<n2)?n1:n2;

    if(n1==0)
    {
     printf("GCD(gretest common factor) of %d and %d is %d\n",n1, n2, n2);
     return 0;

    }

    if(n2==0)
    {
     printf("GCD(gretest common factor) of %d and %d is %d\n",n1, n2, n1);
     return 0;

    }
    

    

    while(b!=0)
    {
       temp=a%b;
       a=b;
       b=temp;
      
    }
     printf("GCD(gretest common factor) of %d and %d is %d\n",n1, n2, a);


    

}
