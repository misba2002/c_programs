
#include<stdio.h>
int postinc( int *num)
{
    int ret = *num;
   
    for(int i=0; i<31; i++)
    {
         if((*num) &(1u<<i))
         {
            (*num) = (*num) & (~(1u<<i));
          
         }
         else
         {
            (*num) = (*num) | (1u<<i);
            break;
         }
         if(i%4==0)
         {
            printf(" ");
         }
    }
    return ret;
}

int main()
{
    int num;
    printf("Enter num:");
    scanf("%d", &num);
    int res =postinc(&num);
    printf("res is %d\n", res);
    printf("Now value of num is %d\n", num);
  



}