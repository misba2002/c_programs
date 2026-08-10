#include<stdio.h>
int string_length(char *);

int main()
{
    char str[20] ;

    printf("Enter string 1: ");
    scanf("%[^\n]", str);
   
    int str1_length=string_length(str);
   
    int j=str1_length-1;
    for(int i=0; i<str1_length/2; i++)
    {
        if(str[i]==str[j])
        {
           
            j--;
            continue;
        }
        else
        {
            printf("Not an palindrome!");
            return 0;
        }

    }
    printf("String %s is an palindrome\n", str);






}

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
