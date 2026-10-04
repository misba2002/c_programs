#include<stdio.h>
// PRINT ARRAY
void print_array(int row, int col, int (*arr)[col])
{
    int k=0;
    

    
     for(int i=0; i<row; i++)
    {
        
        for(int j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }




}
// FINDING TRANSPOSE FOR SQUARE MATRIX
void matrix_transpose(int row, int col, int (*arr)[col])
{
    for(int i=0; i<row; i++)
    {
        for(int j=i+1; j<col; j++)
        {
            int temp  =  arr[i][j];
            arr[i][j] =  arr[j][i];
            arr[j][i] =  temp;
        }
    }
}
// FINDING TRANSPOSE FOR DIFFRENT NUMBERS OF ROW AND COL
void matrix_transpose_drc(int row, int col, int (*arr)[col])
{
    
    int transpose_arr[col][row];
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            transpose_arr[i][j]=arr[j][i];
        }
    }

    printf("\nPrinting After finding transpose\n");
    print_array(col, row, transpose_arr);

    
}


int main()
{
    int row, col;

    printf("Enter the row and col size:");
    scanf("%d %d", &row, &col);

    int arr[row][col];

    printf("Enter array elements:");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nPrinting before finding transpose\n");
    print_array( row,  col , arr);

    if(row == col)
    {
    matrix_transpose(row,col, arr);

    printf("\nPrinting After finding transpose\n");
    print_array( row, col , arr);

    }
    else  matrix_transpose_drc(row, col, arr);

    

    





}