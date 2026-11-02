#include<stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int total = m+n;

    for(int j=0; j<n; j++)
    {
        nums1[m+j] = nums2[j];
    }

    for(int i=0; i<total-1; i++)
    {
        int smallest = i;

        for(int j=i+1; j<total; j++)
        {
            if(nums1[j] < nums1[smallest])
            {
                smallest = j;
            }
        }

        int temp = nums1[i];
        nums1[i] = nums1[smallest];
        nums1[smallest] = temp;
    }
}

int main()
{
    int sizea, sizeb;
    printf("enter size of array 1 and array 2:");
    scanf("%d%d", &sizea, &sizeb);

    int arra[sizea+sizeb], arrb[sizeb];
    printf("Array 1 elemnts in sorted order\n");
    for(int i=0; i<sizea; i++)
    {
        scanf("%d", &arra[i]);
    }
     printf("Array 2 elemnts in sorted order\n");
    for(int i=0; i<sizeb; i++)
    {
        scanf("%d", &arrb[i]);
    }
    int resarr[sizea+sizeb];
    merge(arra, sizea, sizea, arrb, sizeb, sizeb);
    printf("After merging two sorted array:\n");
    for(int i=0; i<sizea+sizeb; i++)
    {
        printf("%d ", arra[i]);
    }

}
