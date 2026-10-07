#include<stdio.h>
void spiral_matrix(int row,int col, int (*arr)[col])
{
     if (row <= 0 || col <= 0 || arr == NULL)
     {
        printf("Invalid input\n");
        return;
     }
        


    int row_min=0, col_min=0, row_max=row-1, col_max=col-1;

    while(row_min<=row_max && col_min <= col_max)
    {
        
        
             for(int i=col_min; i<=col_max; i++)
            {
            printf("%d ",arr[row_min][i]);
             }
             row_min++;

            
       

         if(row_min <= row_max && col_min <=col_max)
        {
                for(int i=row_min; i<=row_max; i++)
            {
                printf("%d ", arr[i][col_max]);
            }
            col_max--;
            
        }

       
         if(col_min <= col_max && row_min <=row_max)
        {
             for(int i=col_max ;i>=col_min ; i--)
            {
                printf("%d ", arr[row_max][i]);
            }
            row_max--;
                
        }

       
         if(row_min <= row_max && col_min <=col_max)
        {
             for(int i=row_max; i>=row_min; i--)
            {
                printf("%d ", arr[i][col_min]);
            }
            col_min++;
            
        }
        
       
    }
}
int main()
{
    int row, col;
    printf("Enter row and col size:");
    scanf("%d%d", &row, &col);

    int arr[row][col];

    printf("Enter 2d array elements:");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    spiral_matrix(row, col, arr);

}