#include<stdio.h>
#include<stdlib.h>
void anticlock_wise(int row,int col,int (*arr)[col])
{
     int transpose[col][row];
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

     for(int i=0; i<row; i++)
     {
        for(int j=0; j<col/2; j++)
        {
            int temp= transpose[j][i];
            transpose[j][i]=transpose[col-j-1][i];
            transpose[col-j-1][i]=temp;
        }
     }
     printf("printing anticlock wise array:\n");
     for(int i=0; i<col; i++)
     {
        for(int j=0; j<row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");

     }

}

int main()
{
    int row, col;
    printf("Enter row and col\n");
    scanf("%d%d", &row, &col);

    int (*arr)[col];

   arr=malloc(row*col*sizeof(int));
   if(arr==NULL)
   {
    printf("Memory allocatuion failed:\n");
    return 0;
   }

   printf("Enter array elemnts:");
   for(int i=0; i<row; i++)
   {
    for(int j=0; j<col; j++)
    {
        scanf("%d", &arr[i][j]);
    }
   }

   anticlock_wise(row,col,arr);
   free(arr);


}