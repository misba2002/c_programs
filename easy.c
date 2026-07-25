#include<stdio.h>

int main()
{
   unsigned long long int n,sum=0,ori, count=0,rev=0,largest,smallest,larn,sman,flag=0;

    printf("Enter the number:");
    scanf("%llu", &n);

   
   
    int i=1;
    int temp;
    ori=n;
    larn=ori;
    sman=ori;

    largest=larn%10;
    smallest=sman%10;

    while(n>0)
    {
        temp=n%10;
        if(flag==1)
        {
            if(largest<temp)
            {
                largest=temp;
            }
            if(smallest>temp)
            {
                smallest=temp;
            }
        }
        
        sum+=temp;
        rev=rev*10+temp;


    
        n=n/10;
        flag=1;
        count++;
       
        
    }
    printf("sum is %llu\n", sum);
    printf("rev is  %llu\n", rev);
    printf("largest is  %llu\n", largest);
    printf("smallest is  %llu\n", smallest);
    
    if(rev==ori)
     printf("IT IS AN PALINDROME!\n");
    else  printf("IT IS NOT  AN PALINDROME!\n");
    printf("no of digits are %llu\n", count);
    // printf("\n");
    sum=0;
    count=0;
    rev=0;
    flag=0;
     
    n=ori;

    do{
      
    temp=n%10;
     if(flag==1)
        {
            if(largest<temp)
            {
                largest=temp;
            }
            if(smallest>temp)
            {
                smallest=temp;
            }
        }
    sum+=temp;
     rev=rev*10+temp;
    n=n/10;
     flag=1;
    count++;

    }while(n>0);
    printf("sum is %llu\n", sum);
     printf("rev is  %llu\n", rev);
     if(rev==ori)
     printf("IT IS AN PALINDROME!\n");
     else  printf("IT IS NOT  AN PALINDROME!\n");
     printf("no of digits are %llu\n", count);
      printf("largest is  %llu\n", largest);
    printf("smallest is  %llu\n", smallest);


    //  printf("\n");
      sum=0;
      count=0;
      rev=0;
      flag=0;
     
    n=ori;

     for( ; n>0; n=n/10)
     {
        temp=n%10;
        if(flag==1)
        {
            if(largest<temp)
            {
                largest=temp;
            }
            if(smallest>temp)
            {
                smallest=temp;
            }
        }
        sum+=temp;
         rev=rev*10+temp;
        count++;
         flag=1;
        

       
     }
     printf("sum is %llu\n", sum);
     printf("rev is  %llu\n", rev);
     if(rev==ori)
     printf("IT IS AN PALINDROME!\n");
     else  printf("IT IS NOT  AN PALINDROME!\n");
     
     printf("no of digits are %llu\n", count);
     printf("number is  are %llu\n", ori);
      printf("largest is  %llu\n", largest);
    printf("smallest is  %llu\n", smallest);



}