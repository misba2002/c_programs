// DO CIRCULAR RIGHT SHIFT USING BITWISE OPERATION

#include<stdio.h>
void print_bits(int num)
 { 
   
   printf("\n");
    for(int i=31; i>=0; i--)
    {
        if(num &(1u << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        if(i%4 == 0)
        {
            printf(" ");
        }
    }
    printf("\nended.....");

 }
 void Circular_right_shift(int num, int n)
    {
        // print_bits(num);
        unsigned int mask =num << (32-n); 
        // print_bits(mask);


    //    print_bits((unsigned int )num >> n);
        int res = ((unsigned int)num >> n) | mask;

        print_bits(res);


    }
int main()
{
    int num, n;

    printf("Enter number:");
    scanf("%i",&num);

     printf("Enter left shift:");
    scanf("%d",&n);



     Circular_right_shift(num, n);



   

}