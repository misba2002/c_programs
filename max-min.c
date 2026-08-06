#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size:");
    scanf("%d", &size);

    if(size==0)
    {
        printf("Array doesn't exist: size is 0");
        return 0;
    }

    int arr[size];

    printf("Enter array elements:");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest=arr[0], largest=arr[0];

    for(int i =0; i<size; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }

        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }

    printf("The diffrence between max and min is %d - %d = %d \n",largest, smallest, largest-smallest);


}