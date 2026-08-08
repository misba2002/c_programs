#include<stdio.h>

int string_length(char *str)
{
    int i=0, count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }

    return count;
}

int main()
{
    char str1[20];

    printf("Enter string 1: ");
    scanf("%[^\n]", str1);

    char str2[20];

    printf("Enter string 2: ");
    scanf(" %[^\n]", str2);

    int str1_length=string_length(str1);
    int str2_length=string_length(str2);

    if(str1_length!=str2_length)
    {
        printf("Strings are not equal %s is of length %d and %s is of length %d\n",str1, str1_length, str2, str2_length);
        return 0;
    }
    
    int equal=1;
    for(int i=0; i<str1_length; i++)
    {
        if(str1[i]!=str2[i])
        {
         equal=0;
         break;
        }
    }
    if(equal==1)
    {
      printf("Strings are  equal and of same order \n"); 
      return 0;  
    }
   

   
    for(int i=0; i<str1_length; i++)
    {
        equal=1;
        for(int j=0; j<str2_length; j++)
        {
             if(str1[i]!=str2[j])
            {
                equal=0;
            
            }
            else 
            {
                equal = 1;
                break;
            }
           

        }
         if(equal==0)
        {
                printf("Strings are not equal i.e is %s and %s \n", str1, str2);
                return 0;
        }
        
    }
    if(equal==1)
    {
        printf("Strings are equal but order is changed of %s and %s\n ", str1, str2);
        return 0;
    }









}