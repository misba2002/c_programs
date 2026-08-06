#include<stdio.h>

int main()
{
    int size;

    printf("Enter array size:");
    scanf("%d", &size);

    if(size==0)
    {
        printf("Size is zero array doesn't exist!");
        return 0;
    }
    int arr[size];
    printf("Enter array elements:");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int first = -1, last=-1;

    int element;
    printf("Enter element to search:");
    scanf("%d", &element);


    for(int i=0; i<size; i++)
    {
        if(first==-1)
        {
          if(arr[i]==element)
        {
            first=0;
            printf("First occurence is at index %d\n", i);
        }
        }

        if(arr[i]==element)
        last=i;


       

    }
    printf("Last occurence is %d\n", last);
}
