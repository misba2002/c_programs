#include<stdio.h>
union u 
{
   unsigned char c;
    struct nibble
    {
     unsigned char  lower :4;
     unsigned char upper :4;
    }s;
};
void swap_nibble(union u *val)
{
   unsigned char temp = val -> s.lower;
     val->s.lower = val->s.upper;
    val->s.upper = temp;

}
int main()
{
union u val;
printf("Enter the 1 byte value:");
scanf("%hhX", &val.c);
 swap_nibble(&val);
printf("After swap the value is %hhx\n",val.c);
}