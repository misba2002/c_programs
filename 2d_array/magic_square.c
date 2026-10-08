#include<stdio.h>
#include<stdlib.h>
void maqic_square(int n)
{
    if(n%2==0)
    {
        printf("Cant create maqic square !");
        return;
    }
   
    int value=1, row=0,  mid=n/2, col=mid, square=n*n;
     
   int (*arr)[n] = calloc(n, sizeof(*arr));
        if(arr == NULL)
        {
        printf("Memory allocation failed\n");
        free(arr);
        return;
        }
    arr[0][mid]=value++;
   
    while(value <= square)
    {
        int old_row = row;
        int old_col = col;
        row--;
        col++;

        if(row <0)
        {
            row = n-1;
        }
        if(col >= n)
        {
            col =0;
        }
         
        if(arr[row][col]!=0)
        {
           row = old_row + 1;
           col = old_col;
        }
        arr[row][col]=value++;
        
        
    }

   
int row_sum=0, col_sum=0, left_dig_sum=0, right_dig_sum=0;

int  sum_value = (square*(square+1))/(2*n);
    for(int i=0; i<n ; i++)
    {
        row_sum =0;
        col_sum=0;
        for(int  j=0; j<n; j++)
        {
            row_sum += arr[i][j];
            col_sum += arr[j][i];

            if(i==j)
            {
                left_dig_sum += arr[i][j];
            }
            if(i+j == n-1)
            {
                right_dig_sum += arr[i][j] ;
            }
        }
        if(row_sum != sum_value || col_sum!= sum_value  )
        {
            printf("Inalid square matrix generated!");
            free(arr);
            return;
        }
    }
    if(left_dig_sum != sum_value ||  right_dig_sum != sum_value)
    {
          printf("Inalid square matrix generated!");
          free(arr);
          return;

    }

     printf("Printing generated square matrix:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
          printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
   
    free(arr);
}

int main()
{
    int n;
    printf("Enter n value : ");
    scanf("%d", &n);

     maqic_square(n);

}