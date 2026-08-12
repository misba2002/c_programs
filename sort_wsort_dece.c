#include<stdio.h>
// SORTING IN DECREASING ORDER
void count_print(int *arr, int size, int element)
{
    int count=0;
    for(int i=0; i<size; i++)
    {
    if(element == arr[i])
    {
        count++;
    }
    }

    for(int j=0; j<count; j++)
    {
        printf("%d ", element);
    }
    
}

int second_largest(int *arr, int size, int largest, int smallest)
{
   
    for(int i=0; i<size; i++)
    {
        if(arr[i] > smallest && arr[i] < largest)
        {
            smallest = arr[i];
           

        }
    }
    return smallest;
}

int main()
{
    int size;
    printf("Enter the size :");
    scanf("%d", &size);

    int arr[size];

    if(size<=1)
    {
        printf("Invalid size!");
        return 0;
    }

    printf("Enter the array elements:");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    int largest  = arr[0];


    for(int i=0; i<size; i++)
    {
        if(largest < arr[i])
        {
            largest =  arr[i];
        }
        if(smallest > arr[i])
        {
            smallest = arr[i];
        }

    }

     count_print(arr, size, largest);
     
     int next_value=largest;
    
       while(next_value != smallest)
       {
            next_value= second_largest(arr, size , next_value, smallest);
            count_print(arr, size, next_value);
       }
      
     
    



}