#include<stdio.h>
#define SWAP(lower, upper) \
    ((lower) ^= (upper),   \
     (upper) ^= (lower),   \
     (lower) ^= (upper))




    union
    {
        int val;
        struct bits
        {
            unsigned int lower:4;
            unsigned int upper:4;
        }byte;

    }un_val;
   

int main()
{
   
    unsigned int  num;
   printf("Enter in hexadecimal form :");
   scanf("%x", &num);


   un_val.val= num;
    printf("value now is :%X\n", un_val.val);
    printf("bit feild loweris %X\n", un_val.byte.lower);
    printf("bit feild upper  is %X\n", un_val.byte.upper);

    
   SWAP(un_val.byte.lower, un_val.byte.upper);

   printf("After swapping\n");
   printf("Lower: %X\n", un_val.byte.lower);
   printf("Upper: %X\n", un_val.byte.upper);
   printf("value now is :%X\n", un_val.val);



   
   


}