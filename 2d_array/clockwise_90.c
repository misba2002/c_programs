#include<stdio.h>
#include<stdlib.h>
int **transpose(int row,int col,int **arr)
{
    int **transpose;
    transpose= malloc(col * sizeof(*arr));
    if(transpose==NULL)
    {
        free(transpose);
        printf("Memory alloacation failed of transpose function\n");
        return NULL;
    }
    for(int i=0; i<col; i++)
    {
        transpose[i]=malloc(row * sizeof(int));
         if(transpose[i]==NULL)
        {
            for(int j=0; j<i; j++)
            {
                
                free(transpose[i]);
                return NULL;
                
            }
            printf("Memory allocation failed\n");
            return 0;
        }
    }
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            transpose[i][j]=arr[j][i];
        }
    }

    printf("Transpose of the given matrix is \n");
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return transpose;
}
 void rotate_90(int row,int col ,int **arr)
 {
    int **result = transpose(row,col,arr);
    if(result==NULL)
    {
        return;
    }
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row/2; j++)
        {
            int temp = result[i][j];
            result[i][j]=result[i][row-j-1];
            result[i][row-j-1]=temp;
        }
    }
    printf("After rotating 90 degrss clockwise matrix  is\n");
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<col; i++)
    {
        free(result[i]);
    }
    free(result);
 }
int main()
{
    int row,col;
    printf("Enter row and col:\n");
    scanf("%d%d", &row, &col);
    if(row<=0 || col<=0)
    {
        printf("Invalid row and col value:\n");
        return 0;
    }

    int *arr[row];
    for(int i=0; i<row; i++)
    {
        arr[i]= malloc(col *sizeof(int));
        if(arr[i]==NULL)
        {
            for(int j=0; j<i; j++)
            {
                
                free(arr[j]);
                
            }
            printf("Memory allocation failed\n");
            return 0;
        }
    }

    printf("Enter element of the array:\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

     rotate_90(row,col ,arr);

    for(int i=0; i<row; i++)
    {
        free(arr[i]);
    }
    

   
    
}