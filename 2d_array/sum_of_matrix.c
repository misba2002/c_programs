#include<stdio.h>
#include<stdlib.h>

 void *sum_of_matrix(int row, int col, int (*arr1)[col], int mrow,int mcol, int (*arr2)[mcol])
{
    if(row <= 0 || col <=0 || arr1==NULL || mrow <=0 || mcol <=0 || arr2 == NULL)
    {
        return NULL;
    }
    if(mrow==row && mcol == col)
    {
        int (*rowptr)[col] = malloc(row*sizeof(*rowptr));

        if(rowptr==NULL)
        {
            return NULL;
        }

       

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                rowptr[i][j]= arr1[i][j] + arr2[i][j];
            }
        }

         return rowptr;

    }
    else return NULL;

    
}
int main()
{
    int row, col, row1, col1;
    printf("Enter row and col size of array 1:");
    scanf("%d%d", &row, &col);

    int arr1[row][col];

    printf("Enter array 1 elements:\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }


     printf("Enter row and col size of array 2:");
    scanf("%d%d", &row1, &col1);

     int arr2[row1][col1];

    printf("Enter array 2 elements:\n");
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }


    int (*rowptr)[col];
    rowptr=sum_of_matrix(row , col, arr1 , row1, col1 ,arr2);
    if(rowptr !=NULL)
    {
        printf("Sum of array elements is :\n");
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                printf("%d ", rowptr[i][j]);
            }
            printf("\n");
        }
        free(rowptr);
    }
    else printf("Matrix addition not possible.\n");



}