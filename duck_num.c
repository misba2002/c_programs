#include<stdio.h>

int main()
{
    int n, l_d, ori_n, flag=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    ori_n=n;

    if(n==0)
    {
      printf("%d is a duck number\n", n);
      return 0;
    }
    while(n>0)
    {
        l_d=n%10;
        if(l_d==0)
        {
            flag=1;
            printf("%d is a duck number\n",ori_n );

            break;
        }
        n=n/10;
        
    }
    if(flag==0)
    {
       printf("%d is not a duck number",ori_n );  
    }

    
}