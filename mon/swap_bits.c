#include<stdio.h>
int swap(int num,int n,int m);
void print_bit(int);
int main()
{
    int m,n,num;
    printf("Enter number:");
    scanf("%d", &num);
    printf("Enter positions:\n");
    scanf("%d%d", &m, &n);
    printf("NUM is \n");
    print_bit(num);
    

    num=swap(num,n,m);
    printf("\nAfter NUM is \n");
    print_bit(num);
    printf("\nAfter swap value is %d\n", num);





}
void print_bit(int num)
{
    while(num > 0)
    {
        if(num & 1)
        {
            printf("1");
        }
        else printf("0");
        num >>=1;
    }
}
int swap(int num,int n,int m)
{
    if(((num >> m)& 1 ) != ((num >> n)&1))
    {
       num =  (num ^ (1u << m));
       num = (num ^(1u <<n ));
    }
    return num;
}
