#include<stdio.h>
#include<math.h>
void validate_reset(int col, int *validate)
{
    for(int i=0; i<=col; i++)
    {
        validate[i]=0;
    }

}
int suduko_validater(int row, int col,int (*arr)[col])
{
    int validate[col+1];
    validate_reset(col,validate);

 
    // ROW VALIDATER
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(validate[arr[i][j]] != 1)
            {
                validate[arr[i][j]] = 1;
            }
            else 
            {
                printf("Duplicates found in row no: %d and column no:%d\n",i+1,j+1);
                return 0;
            }
        }
        validate_reset(col,validate);
    }
    // COLUMN VALIDATER
    validate_reset(col,validate);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(validate[arr[j][i]] != 1)
            {
                validate[arr[j][i]] = 1;
            }
            else 
            {
                printf("Duplicates found in column no : %d\n",i+1);
                return 0;
            }


        }
         validate_reset(col,validate);
    }
    // BOX VALIDATER
     validate_reset(col,validate);

    int  box_size = (int)sqrt(row);

     if(box_size * box_size != row)
    {
        printf("Invalid row size\n");
        return 0;
    }   
    
     int istart=0, iend=box_size;
     int jstart=0, jend=box_size;


     
    while(1)
    {
        validate_reset(col,validate);
        for(int i=istart; i<iend; i++)
        {
           
            for(int j =jstart; j<jend; j++)
            {

                if(validate[arr[i][j]] != 1)
                {
                    validate[arr[i][j]] = 1;
                }
                else 
                {
                    printf("Duplicates found in the box of  row no : %d and  column no :%d\n",i+1,j+1);
                    return 0;
                }

            }
        }
        if(jend==row && iend==row)
        {
            break;
        }
        
        if(jend == row)
        {
            istart=istart+box_size;
            iend= iend+box_size;
            jstart=0;
            jend=box_size;
        }
        else
        {
        jstart=jstart+box_size;
        jend=jend+box_size;
        }
      
       

    }
    return 1;
       

        


    
    
}

int main()
{
    int row, col;
    printf("Enter row and col for suduko:");
    scanf("%d %d", &row, &col);
    if(row != col )
    {
        printf("Invalid suduko row and col they should be equal\n");
        return 0;
    }
    if(row <=0 || col <=0)
    {
        printf("Invalid suduko row and col they should be positve and valid\n");
        return 0;

    }
    int arr[row][col];
    printf("Ener sudoko elements:\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
           if(arr[i][j] > row || arr[i][j]<=0)
           {
            printf("Invalid inputs ,input can only be between 1 to %d\n", row);
            return 0;
           }
          

        }
    }
    
    int res =suduko_validater( row,col, arr);
    if(res == 0)
    {
       printf("Your suduko inputs  are invalid\n");
    }
    else
    {
        printf("Your suduko inputs  are valid\n");

    }

}
