#include<stdio.h>
void product_of_matrix(int m, int n, int arr[m][n], int p, int q, int arr1[p][q])
{
   if(n!=p)
   {
    printf("Matrix multiplication not possible\n");
    return;
   }

   int res[m][q], row=0,col=0;
   
   int sum=0;
   for(int i=0; i<n; i++)
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            int sum = 0;

            for (int k = 0; k < n; k++)
            {
                sum+=arr[i][k]*arr1[k][j];
            }
            res[i][j]=sum;

           
        }
    }

   printf("Printing resultant product matrix:\n");
   {
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<q; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
   }
}
int main()
{
    int m, n, p,q;
    printf("Enter row and col size of array 1:");
    scanf("%d%d", &m,&n);
    
    printf("Enter row and col size of array 1:");
    scanf("%d%d", &p,&q);

    int arr[m][n],  arr2[p][q];

     if(n!=p)
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    printf("Enter array 1 elements having %d row and %d col:\n", m, n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
     printf("Enter array 2 elements having %d row and %d col:\n",p,q);
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    product_of_matrix(m,n,arr,p,q,arr2);




}