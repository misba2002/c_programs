#include<stdio.h>
void rotate(int* nums, int numsSize, int k) {
    if(numsSize<=0 || numsSize==1 || k==numsSize)
    {
        return ;
    }
    k=k%numsSize;
//   REVERSE FULL ARRAY
   for(int i=0; i<numsSize/2; i++)
   {
    int temp = nums[i];
    nums[i]= nums[numsSize-i-1];
    nums[numsSize-i-1]=temp;
   }
//    REVERSING FIRsT K ELEMENT
for(int i=0; i<k/2; i++)
{
    int temp = nums[i];
    nums[i]=nums[k-i-1];
    nums[k-i-1]=temp;
}
// REVERSING REMAING K ELEMENT AFTER K
for(int i=k; i<k+(numsSize-k)/2; i++)
{
    int temp = nums[i];
    nums[i]=nums[numsSize-i-1+k];
    nums[numsSize-i-1+k]=temp;
}
    
}
int main()
{
    int size;
    printf("Enter size:");
    if(scanf("%d", &size)!=1)
    {
        return 0;
    }
    if(size<=0)
    {
        printf("Invalid size\n");
        return 0;
    }

    int arr[size];
    printf("Enter array elements:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

    }
    int k;
    printf("Enter no of right rotations:\n");
    if(scanf("%d", &k)!=1)
    {
        return 0;
    }
    if(k<0)
    {
        printf("Invalid no of rotation\n");
        return 0;
    }
    rotate(arr, size, k);
    printf("After rotation\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);

    }

}