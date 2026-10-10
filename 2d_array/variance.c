#include <stdio.h>
#include<stdlib.h>

float variance(int *arr, int n )
{
    int mean; int sum=0;
    for(int i=0; i<n; i++)
    {
     sum += arr[i];   
    }
    mean = sum/n;
    sum=0;
    
    for(int i=0; i<n; i++)
    {
        int d = arr[i]-mean;
        d= d*d;
        arr[i]=d;
        sum+=arr[i];
        
    }
    float variance_value = sum/(float)n;
    return variance_value;
    
    
}

int main()
{
    int n;
    
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    
    int *arr = malloc(n *sizeof(int));
    if(arr == NULL)
    {
        return 0;
    }
    
    printf("Enter the %d of elements : ", n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    float var =variance(arr,n);
    printf("Variance is %f\n", var);
    
    
    
    
}