#include<stdio.h>

int main()
{
    int n, l_d, evencount=0, oddcount=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n==0)
    {
        evencount++;
    }
    if(n<0)
    {
    while(n<0)
    {
      l_d=n%10;
      if(l_d%2==0)
      {
        evencount++;
      } 
      else oddcount++; 
      n=n/10;
    }

    }

    while(n>0)
    {
      l_d=n%10;
      if(l_d%2==0)
      {
        evencount++;
      } 
      else oddcount++; 
      n=n/10;
    }

    printf("Even count is %d\n", evencount);
    printf("Odd count is %d\n", oddcount);
}