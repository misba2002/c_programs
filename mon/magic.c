#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    
    int temp=num,sum=0;
    while(temp>9)
    {
        sum=0;
        while(temp!=0)
        {
            int l_d=temp%10;
            sum+= l_d;
            temp=temp/10;          
        }
        temp=sum;
    }
    if(temp==1)
    {
        printf("Magic number\n");
    }
    else printf("Not an magic number\n");

}