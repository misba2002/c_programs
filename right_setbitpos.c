#include<stdio.h>
int main()
{
    

    printf("Enter n:");
    int n;
    scanf("%d", &n);
    
    // int val = n & (-n);

    int i=0, flag=0;
    while(flag!=1)
    {
        if(n & (1<<i))
        {
            printf("position is %d\n", i);
            flag=1;
        }
        i++;

    }

}
