#include<stdio.h>
#include<stdlib.h>
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
     
     if(matrixSize<=0)
     {
        return;
     }
    //  check flags
     int row_flag=0, col_flag=0;
     for(int j=0; j<matrixColSize[0]; j++)
     {
        if(matrix[0][j]==0)
        {
            row_flag=1;
            break;
        }
     }
     for(int i=0; i<matrixSize; i++)
     {
        if(matrix[i][0]==0)
        {
           col_flag=1;
           break;
        }
        
     }
     for(int i=1; i<matrixSize; i++)
     {
        for(int j=1; j<matrixColSize[0]; j++)
        {
            if(matrix[i][j]==0)
            {
                matrix[0][j]=0;
                matrix[i][0]=0;
            }

        }
     }
    
     for(int j=1; j<matrixColSize[0]; j++)
     {
           if(matrix[0][j]==0)
            {
              for(int k=1; k<matrixSize;k++)
              {
                matrix[k][j]=0;
                

              }

            }
        
     }
     for(int i=1; i<matrixSize; i++)
     {
        if(matrix[i][0]==0)
        {
            for(int j=0;j<matrixColSize[0];j++)
            {
                matrix[i][j]=0;
            }
        }

     }
     if(row_flag)
     {
        for(int j=0; j<matrixColSize[0]; j++)
           matrix[0][j]=0;
     }
      if(col_flag)
     {
        for(int i=0; i<matrixSize; i++)
           matrix[i][0]=0;
     }
     
}
int main()
{
    int row,col;
    printf("Enter row and col value:");
    if(scanf("%d%d", &row, &col)!=2)
    {
       return 0;
    }
    int **matrix=malloc(row * sizeof(int *));
    if(matrix==NULL)
    {
        free(matrix);
        return 0;
    }
    for(int i=0; i<row; i++)
    {
        matrix[i]=malloc(col*sizeof(int));
        if(matrix[i]==NULL)
        {
            for(int j=0; j<i; j++)
            {
                free(matrix[j]);
            }
            free(matrix);
            return 0;
        }
    }
    printf("Enter array elemnts:\n");
    for(int i=0; i<row;i++)
    {
        for(int j=0; j<col; j++)
        {
                    if(scanf("%d", &matrix[i][j])!=1)
                    {
                        for(int k = 0; k < row; k++)
            {
                free(matrix[k]);
            }

            free(matrix);
                return 0 ;
            }
        }
    }
   
    setZeroes( matrix, row, &col);

    printf(" array elemnts:\n");
    for(int i=0; i<row;i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", matrix[i][j]);
           
        }
        printf("\n");
    }

     for(int i=0; i<row; i++)
            {
                free(matrix[i]);
            }
            free(matrix);
            return 0; 

}