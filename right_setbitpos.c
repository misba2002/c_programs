#include<stdio.h>
int main()
{
    

    printf("Enter n:");
    int n;
    scanf("%d", &n);

    if(n == 0)
    {
        printf("all bits are 0\n");
        return 0;
    }
    
    int val = n & (-n);

     int i=0; 
    while(val > 1)
    {
       val = val >> 1;
       i++;

    }
    printf("position at %d\n", i);

}
