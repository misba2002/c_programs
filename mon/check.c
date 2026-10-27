// SECOND LARGEST DISTINCT ELEMENT IN 2D ARRAY
#include<stdio.h>
#include<stdlib.h>
 int find_distinct_sec(int row, int col,int **ptr)
 {
   int largest =ptr[0][0];
   int seond_largest=ptr[0][0];
   for(int i=0; i<row; i++)
   {
        for(int j=0; j<col; j++)
        {
           if(ptr[i][j] > largest)
           {
                seond_largest=largest;
                largest= ptr[i][j];
           } 
           if(ptr[i][j] >  seond_largest && ptr[i][j]!=largest)
           {
               seond_largest=ptr[i][j];
           }
           if(seond_largest==largest && ptr[i][j]!=largest && ptr[i][j]!=seond_largest)
           {
            seond_largest=ptr[i][j];
           }
        }
       

   }
    if(seond_largest==largest)
    {
    printf("There is no distinct elemnent in this 2d array\n");
    return 0 ;
    }
    else
    {
        return seond_largest;
    }    
 }
int main()
{
    int row, col;
    printf("Enter row value and col value :\n");
    scanf("%d%d", &row, &col);
    if(col<=0 || row <=0)
    {
        printf("Invalid row and column value\n");
        return 0;
    }


    int **ptr;
    ptr = (int **)malloc(row * sizeof(*ptr));

    if(ptr==NULL)
    {
        free(ptr);
        return 0;
    }
    for(int i=0; i<row; i++)
    {
        ptr[i] = (int *)malloc(col * sizeof(**ptr)); 
        if(ptr[i]==NULL)
        {
            printf("Colum memory not allocated!");
            for(int i=0; i<row; i++)
            {
                free(ptr[i]);
            }
            free(ptr);
            return 0;
        } 
    }

    printf("Enter  %d X %d array elements:",row, col);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &ptr[i][j]);
        }
    }
    

    int res= find_distinct_sec(row,col,ptr);
    printf("Second distinctive element in the array is :%d", res);

    for(int i=0; i<row; i++)
    {
        free(ptr[i]);
    }
    free(ptr);
    




}