#include<stdio.h>

int main()
{
    int n, ori_n_count, count=0, orig_num, power=1, l_d, sum=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    ori_n_count=n;
    orig_num=n;

    while(ori_n_count>0)
    {
        ori_n_count=ori_n_count/10;
        count++;

    }
    printf("number of digits in number is %d\n",count);

    while(n>0)
    {
        l_d=n%10;
        power=1;
        for(int i=1; i<=count; i++)
        {
         power=power*l_d;

        }
        printf("%d to the power of %d is %d\n", l_d, count, power);
        sum+=power;
        n=n/10;


    }
    printf("The resulting sum is %d\n", sum);

    if(orig_num==sum)
    {
        printf("\n%d is an AMSTRONGGG NUMBERRR!!!!\n", orig_num);
    }
    else
    {
       printf("\nOOPS!, %d is not an amstrong number!!!!\n", orig_num);   
    }
    


}