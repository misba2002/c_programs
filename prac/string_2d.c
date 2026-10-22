#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// 1.sort string 2.remove duplicates from the string 3.count longest string

void longest_string(char **str)
{
     int i, long_count=0 ,long_index=0;
    for( i=0; i<5; i++)
    {
      
        int k=0;
        while(str[i][k]!='\0')
        {
            
           
            k++;

        }
       
        if(k == long_count)
        {
            continue;
        }
        if((k)>long_count)
        {
          long_count=k-1;
          long_index=i;
       
          
          
        }
        
    }

    printf("The string that is longest is :%s\n", str[long_index]);
}

 void sort_string(char **str)
 {
    for(int i=0; i<5; i++)
    {
       for(int j=0; j<5-i-1; j++) 
        {

            int k=0;
           
            if(strcmp(str[j], str[j+1])>0)
            { 
                char *temp ;
                temp=str[j];
            
                str[j] = str[j+1];
                str[j+1] =temp ;
            

            }
        }


    }

    printf("After sorting string are:\n");
    for(int i=0; i<5; i++)
       printf("%s ", str[i]);
 }

  int remove_dup(char *str[])
  {
    int size=5;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size;)
        {
            if(strcmp(str[i],str[j])==0)
            {
                free(str[j]);
                for(int k=j; k<size-1; k++)
                {
                    str[k]= str[k+1];
                }
                size--;
            }
            else
            {
                j++;

            }
        }
    }
    return size;


     
  }

int main()
{
    char *str[5];//char **str

    printf("Enter 5 strings:\n");
    for(int i=0; i<5; i++)
    {
     str[i]= malloc(50*sizeof(char));
     scanf("%s", str[i]); 
    }

    printf("Your 5 tsrings are :\n");
    for(int i=0; i<5; i++)
    {
        printf("%s\n",str[i]);   //str[i]- adress of string 
    }

    longest_string(str);

    sort_string(str);

    int new_size = remove_dup(str);

    printf("\nAfter removing duplicates :\n");
    for(int i=0; i<new_size; i++)
    {
        printf("%s ", str[i]);
    }



   for(int i=0; i<new_size; i++)
        free(str[i]);
    
    


}