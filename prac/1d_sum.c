#include<stdio.h>
#include<stdlib.h>
void sum_1d(int row,int col,int (*arr)[col])
{
    for(int i=0; i<row; i++)
    {
        int sum=0;
        for(int j=0; j<col; j++)
        {
           sum += arr[i][j];
        }
        printf("Sum of row %d is : %d\n", i, sum);
    }
}

int main()
{
    int row, col;
    printf("Enter row and col val :");
    scanf("%d%d", &row, &col);


    int (*ptr)[col];
    ptr = malloc(row *sizeof(*ptr));
    if(ptr==NULL)
    {
        return 0 ;
    }

   

    printf("Enter %d X %d matrix elements :",row,col);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &ptr[i][j]);
        }
    }

    sum_1d(row,col,ptr);

    free(ptr);
}


