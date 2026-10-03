//WAP TO REVERSE EACH 1D ARRAY IN 2D ARRAY
#include<stdio.h>

void reverse_arr(int row, int col, int (*arr)[col])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col/2; j++)
        {
            int temp = arr[i][j];
            arr[i][j]= arr[i][col-j-1];
            arr[i][col-j-1]=temp;
        }
    }
   
}
void print_array(int row, int col ,int arr[row][col])
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row, col;

    printf("Enter no of rows and columns :");
    scanf("%d %d", &row, &col);

    int arr[row][col];

    printf("Enter array elements\n");
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
       
    }

    

    printf("Before reversing the array:\n");
    print_array(row, col, arr);


    reverse_arr( row, col, arr);

    printf("After reversing the array:\n");
    print_array(row, col, arr);

}