#include<stdio.h>

  
    struct nibble
    {
     unsigned char  lower :4;
     unsigned char upper :8;
    };

int main()
{
    unsigned char num;
struct nibble c;
printf("Enter the 1 byte value:");
scanf("%hhX", &num);
 c.lower = num;
 c.upper= (num >> 4);
 
num = (c.lower << 4) | c.upper;

unsigned int number = (num & 0x0f) | (num & 0xf0);
 printf("c.lower the value is: %hhx\n",c.lower);
 printf("c.upper the value is: %hhx\n",c.upper);

printf("After swap the value is: %hhx\n",num);
printf("After swap the value number: %hhx\n",number);
}