#include<stdio.h>
int string_length(char * str)
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
    char str[20];

    printf("Enter string: ");
    scanf("%[^\n]", str);

    int length=string_length(str);
    int print_index;

   
   
   for(int i=length-1; i>=0; i--)
   {
   
         if(str[i] == ' ')
         {
            str[i]='\0';
            print_index = i + 1;
            printf("Printing index is %d\n", print_index);
            printf("%s\n", &str[print_index]);
           

         }

         
         
   }
   printf("%s\n", str);
}