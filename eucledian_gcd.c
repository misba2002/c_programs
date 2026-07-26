#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, temp, a , b, lcm;

    printf("Enter the vlaue n1 and n2: ");
    scanf("%d%d", &n1, &n2);

     n1 = abs(n1);
     n2 = abs(n2);

    a=n1;
    b=n2;

  

    if(n1==0 && n2==0)
    {
     printf("GCD(gretest common factor) of %d and %d is undefined behaviour\n", n1, n2);
     printf("LCM(least common Multiple) of %d and %d undefined behaviour\n", n1, n2);
    return 0;

    }

    if(n1==0)
    {
    printf("GCD(gretest common factor) of %d and %d is %d\n",n1, n2, n2);
    printf("LCM(least common Multiple) of %d and %d is 0\n",n1, n2);
    return 0;
    }

    if(n2==0)
    {
    printf("GCD(gretest common factor) of %d and %d is %d\n",n1, n2, n1);
    printf("LCM(least common Multiple) of %d and %d is 0\n",n1, n2);
    return 0;

    }
    

    

    while(b!=0)
    {
       temp=a%b;
       a=b;
       b=temp;
      
    }
     printf("GCD(gretest common factor) of %d and %d is %d\n",n1, n2, a);

     lcm=(n1/a)*n2;

    

     printf("LCM(least common Multiple) of %d and %d is %d\n",n1, n2, lcm);




    

}
