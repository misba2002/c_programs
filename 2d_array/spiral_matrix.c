#include<stdio.h>
void  print_spiral_matirx(int row, int col,int (*arr)[col])
{
 
int row_min = 0;
int row_max = row - 1;

int col_min = 0;
int col_max = col - 1;


while(row_min <= row_max && col_min <= col_max)
{
    // top → right
    for(int i = col_min; i <= col_max; i++)
        printf("%d ", arr[row_min][i]);

    row_min++;

    if(row_min > row_max)
        break;


    // right → bottom
    for(int i = row_min; i <= row_max; i++)
        printf("%d ", arr[i][col_max]);

    col_max--;

    if(col_min > col_max)
        break;


    // bottom → left
    for(int i = col_max; i >= col_min; i--)
        printf("%d ", arr[row_max][i]);

    row_max--;

    if(row_min > row_max)
        break;


    // left → top
    for(int i = row_max; i >= row_min; i--)
        printf("%d ", arr[i][col_min]);

    col_min++;
}
    
    
}
int main()
{
    int row,col;

    printf("Enter rowsize and colsize:");
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    print_spiral_matirx(row, col, arr);

}