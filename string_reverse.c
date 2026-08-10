#include<stdio.h>

int string_length(char *);

int main()
{
    char str[20];

    printf("Enter string : ");
    scanf(" %[^\n]", str);

    int str_length = string_length(str);

    int j=str_length-1;
    for(int i=0; i<str_length/2; i++)
    {
         char temp= str[i];
         str[i]=str[j];
         str[j]=temp;
         j--;

    }

    printf("Reversed string is %s\n",str);
}
int string_length(char *str)
{
    int count=0, i=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }

    return count;
}
