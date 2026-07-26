#include<stdio.h>

int main()
{
   int n, square, ori_n, count=0, last_digits, tenth_power=1;
   
   printf("Enter the value n:");
   scanf("%d", &n);

   ori_n=n;
   square=n*n;

   while(n>0)
   {
    n=n/10;
    count++;
   }

   for(int i=1; i<=count; i++)
   {
    tenth_power=tenth_power*10;
   }

   
    last_digits=square%tenth_power;

    if(ori_n==last_digits)
    printf("%d is a automorphic number\n",ori_n);
   
    else printf("%d ia not an automorphic number as last digits of the square is %d\n",ori_n, last_digits);
  


   
}