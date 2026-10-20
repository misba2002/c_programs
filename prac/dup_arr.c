// Write a C program to remove all duplicate elements from an integer array while preserving the original order of the first occurrence of each element.
// arr = {4, 2, 4, 7, 2, 9, 7, 1, 4} 
// 4 2 7 9 1
#include<stdio.h>
int rem_dup(int arr[], int size)
{
    int duplicate=0;
    for(int i=0; i<size-duplicate; i++)
    {
       
        for(int k=i+1; k<size-duplicate; k++)
        {
            while(k<size-duplicate && arr[i] == arr[k] )
            {
                
                for(int j=k; j<size-duplicate-1; j++)
                {
                    arr[j]=arr[j+1];
                   
                }
                 duplicate++;
                  printf("\nAfter processing array \n");
                  for(int m=0; m<size; m++)
                  {
                    printf("%d ", arr[m]);
                  }
                  printf("\n");
            }
           
        }
       
    }

    return size-duplicate;
}

int rm_dup(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size;)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j ; k<size-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;

            }
            else
            {
                j++;
            }
        }
    }

    return size;
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
    // int n_size =rem_dup(arr,size);

    int n_size = rm_dup(arr,size);

    printf("\nFinal output:\n");
    for(int i=0; i<n_size; i++)
    {
        printf("%d ", arr[i]);
    }
}