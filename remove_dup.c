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
    int temp;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
            }
          
        }
    }
    int count=0;
    for(int i=0; i<size-count; i++)
    {
        while(i+1<size-count && arr[i]==arr[i+1])
        {
            count++;
            for(int j=i; j<size-1-count; j++)
            {
                arr[j]=arr[j+1];
            }
        }

    }

    printf("AFter removing duplicates:");
    for(int i=0; i<size-count; i++)
    {
        printf("%d ", arr[i]);
    }

}
