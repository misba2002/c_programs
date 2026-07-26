#include<stdio.h>

int main()
{
    int n, sum=0, product=1, l_d, ori_n;

    printf("Enter the num:");
    scanf("%d", &n);

    ori_n=n;
     if(n==0)
    {
      printf("%d is a spy number\n",ori_n);
      return 0;
    }

    while(n>0)
    {
        l_d=n%10;

        sum=sum+l_d;
        product=product*l_d;

        n=n/10;



    }
    if(sum==product)
    printf("%d is a spy number\n",ori_n);
    else
     printf("%d is not a spy number as sum is %d not equal to product %d\n",ori_n, sum, product);
    
}