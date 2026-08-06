#include<stdio.h>

int main()
{
    int size;

    printf("Enter array size:");
    scanf("%d", &size);

    int arr[size];

    if(size==0)
    {
        printf("array size is 0 ,array doesn't exit!");
        return 0;
    }
    if(size==1)
    {
        printf("array size is 1 ,Second largest element doesn't exit!");
        return 0;
    }

    printf("Enter array elements:");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest=arr[0], second_largest=arr[1];
    if(arr[0]>arr[1])
    {
         largest=arr[0];
        second_largest=arr[1]; 
    }
    else
    {
       largest=arr[1];
       second_largest=arr[0];
    }


    for(int i=2; i<size; i++)
    {
        if(largest<arr[i])
        {
            second_largest=second_largest;
            largest=arr[i];
        }
        else if(second_largest<arr[i] && arr[i]!=largest)
        {
            second_largest=arr[i];
        }
        else if(second_largest==largest && arr[i]!=largest)
        {
        second_largest=arr[i];
        }

    }
    if(second_largest==largest)
    {
        printf("NO distinct elements found !second largest element doesn't exit!");
        return 0;

    }

    printf("Second largest element in the given array is %d\n", second_largest);
    return 0;
    
}