#include<stdio.h>


int main()

{
    int n, largest;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elements of array: ");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    largest=arr[0];
   for(int i=0;i<n;i++)
   {
        if(arr[i]>largest)
        {
           largest=arr[i];
            
        }
   }
   printf("Largest value in the given array is %d\n", largest);

   int size=sizeof(arr)/sizeof(arr[0]);
   printf("size is %d\n", size);
    

    return 0;
}