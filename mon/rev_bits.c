#include<stdio.h>
int reverseBits(int n) {
    unsigned int rev=0;
    for(int i=0; i<=31; i++)
    {
       if(n & (1u << i))
       {
        rev = rev | (1u << (31-i));
       }
    }
    return rev;
    
}
void print_bits(int rev)
{
    for(int i=31; i>=0; i--)
    {
        if(rev&(1u << i))
        {
            printf("1");
        }
        else printf("0");

        if(i%4==0)
        {
            printf(" ");
        }
    }
}
int main()
{
    int num;
    unsigned int rev;
    printf("Enter number:");
    scanf("%d", &num);
     printf("before Reversing bits result is\n");
     print_bits(num);
    rev=reverseBits(num);
     printf("\nAfter Reversing bits result is\n");

    print_bits(rev);
   

}