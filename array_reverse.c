#include<stdio.h>

int main()
{
    int n,reverse=0, j=0;;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n], rev[n];

    printf("Enter the array elements: \n");
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=n-1, j=0; i>=0, j<n; i--, j++)
    {
       
       rev[j]=arr[i];
        
    }

    printf("The reversed array is \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", rev[i]);
    }

    return 0;

}