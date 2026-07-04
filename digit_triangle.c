#include<stdio.h>

int main()
{
    int n, last_digit=0;

    printf("Enter max lines: ");
    scanf("%d", &n);

   for(int i=1; i<=n; i++)
   {
    for(int j=1; j<=i; j++)
    {
          printf("%d ",(last_digit+j));

    }
     last_digit=last_digit+i;
    printf("\n");
   }

    return 0;

}