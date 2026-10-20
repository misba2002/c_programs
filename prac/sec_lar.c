
#include<stdio.h>
int second_largest(int arr[], int size)
{
    int largest=arr[0];
    int second_largest=arr[0];

    for(int i=0; i<size; i++)
    {
        if(arr[i] > largest)
        {
            second_largest=largest;
            largest=arr[i];
        }

        if(second_largest < arr[i] && arr[i]!= largest)
        {
            second_largest = arr[i];
        }

        if(second_largest== largest && arr[i]!=largest)
        {
            second_largest= arr[i];
        }
    }
    return second_largest;
}




int main()
{
    int size;
    printf("Enter array size:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    int res= second_largest(arr, size);
    printf("Second largest element in the array is %d\n", res);
    
}  