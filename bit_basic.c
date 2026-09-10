#include<stdio.h>
int main()
{
    int a=10, b=12;
    printf("%d\n", a&b);
    printf("%d\n",  a|b);
    printf("%d\n",  a^b);
    printf("%d %d", ~a, ~b);
}