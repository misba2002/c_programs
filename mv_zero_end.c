#include<stdio.h>

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements :");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int processed=0;
    int count=0;
    for(int i=0; i<size-count; i++)
    {
        
        int temp;
        while(processed<size-count && arr[i]==0)
        {
         
          temp=arr[i];
          for(int j=i; j<size-count-1; j++)
          {
             arr[j]=arr[j+1]; 
          }
          printf("current array is before replacing index %d\n:",size-count);
          for(int i=0; i<size; i++) printf("%d ", arr[i]);
          printf("\n");
          count++;
          processed++;
          arr[size-count]=temp;
          

          printf("current array is:");
          for(int i=0; i<size; i++) printf("%d ", arr[i]);
          printf("\n");

           
          
        }
        processed++;
    }

    printf("After moving all zeros to end now our array is:");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
}