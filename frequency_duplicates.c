#include<stdio.h>

int main()
{
    int size;

    printf("Enter size of the array:");
    scanf("%d", &size);

    if(size==0)
    {
        printf("array size is 0 ,array doesn't exit!");
        return 0;
    }
    


    int arr[size];

    printf("Enter array elemnets:");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++)
    {
      for(int j=0; j<size-i-1; j++)
      {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
      }  
    }

int count=0;

// TO CALCULATE FREQUENCY OF AN ELEMENT
    for(int i=0; i<size; i++)
    {
        count=1;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
              count++;
            }
        }
        printf("%d is appearing %d times\n", arr[i], count);
        while(i+1<size && arr[i]==arr[i+1])
        {
            i++;
        }
    }


    // TO CALCULATE NUMBER OF DUPLICATES
    for(int i=0; i<size; i++)
    { 
        count=0;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count!=0)
        {
        printf("the are %d duplicates of %d\n", count, arr[i]);
        }
        if(count==0)
        {
            printf("the are %d duplicates of %d\n", count, arr[i]); 
        }
        while(i+1<size && arr[i]==arr[i+1])
        {
            i++;
        }
    }

    
}