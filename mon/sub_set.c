#include<stdio.h>
void print(int *temp,int count)
{
    printf("[");
    for(int i=0; i<count; i++)
    {
        printf("%d", temp[i]);

        if(i<count-1)
        {
            printf(",");
        }
    }
    printf("]\n");
}

void subset(int *arr, int size, int index, int *temp, int count)
{
    if(index==size)
    {
     print(temp,count);
     return;   

    }
    temp[count]=arr[index];
    subset(arr,size,index+1,temp,count+1);
    subset(arr,size,index+1,temp,count);

}
int main()
{
    
    int n;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp[n];

    subset(arr, n, 0, temp, 0);

    return 0;
}