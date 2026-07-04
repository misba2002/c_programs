#include<stdio.h>

int main()
{
    int n, d;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    if (n <= 0)
{
    printf("Invalid array size.\n");
    return 0;
}

    printf("Enter the no of digit you want to rotate\n");
    scanf("%d", &d);
    d=d%n;



    int arr[n], temp[d];

    printf("Enter the numbers of array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<d; i++)
    {
        temp[i]=arr[i];
    }

    for(int i=0; i<n-d; i++)
    {
        arr[i]=arr[i+d];
    }
    for(int i=n-d, j=0; j<d; i++,j++)
    {
        arr[i]=temp[j];
    }

    printf("The rotated array is:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}