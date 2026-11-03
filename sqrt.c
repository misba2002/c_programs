#include<stdio.h>
double sqrt(double x)
{
    double new_x=x;
    if(new_x<0)
    {
        new_x= -(new_x);
    }
    double low=0, high=new_x, mid=0, precision=0.0000001;
    while(high-low > precision)
    {
        mid = low +(high-low)/2;
        if(mid*mid <= new_x)
        {
           
            low=mid;
            
        }
        else 
        {
            high= mid;
        } 
    }
    return (low+high)/2;

}
int main()
{
    int x;
    printf("Enter the positive number\n");
    scanf("%d", &x);
    int long new_x=x;
    if(x < 0)
    {
        new_x= -(new_x);
    }
    else new_x=x;

    int long low=0, high=new_x, mid=0,  ans=0;
    while(low<=high)
    {
        mid = low +(high-low)/2;
        if(mid==0 || mid <= new_x/mid)
        {
            ans=mid;
            low=mid+1;
            
        }
        else 
        {
            high= mid-1;
        }
    }
    printf("Sqrt of %d is %ld\n",x, ans);
    printf("SQRT OF PRECESION %lf\n", sqrt( x));

}