#include<stdio.h>


int main()
{
    char comp_arr[10]={'0','1','2','3','4','5','6','7','8','9'};
    int res_arr[10] ={0,0,0,0,0,0,0,0,0,0};
    int length;
    char input[100];
    scanf("%s", input);

     
     length=0;
     for(int i=0; input[i]!='\0'; i++)
     {
        length++;
     }




   for(int i=0; i<length; i++)
   {
    printf("%c ",input[i]);
   }

  

   printf("\nlength is %d",length);

   for(int i=0; i<length; i++)
   {
    for(int j=0; j<=9; j++)
    {
        if (input[i]>='0' && input[i]<='9' && input[i]==comp_arr[j])
        {
            //  printf("\nvalue matched between input[%d] and comp_arr[%d]:", i, j);
            res_arr[j]++;
            
        } 
       
    }
   }
printf("\n");
   for(int i=0; i<10; i++)
   {
    printf("%d, ", res_arr[i]);
   }





}