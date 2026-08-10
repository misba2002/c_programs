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
    char str1[20], str2[20];

    printf("Enter string 1:");
    scanf("%s", str1);

    printf("Enter the string 2:");
    scanf("%s", str2);

    int str_length1 = string_length(str1);

    int str_length2 = string_length(str2);

    int total_length=string_length(str1)+string_length(str2);

    char strAB[total_length + 1];

    printf("Total length of resulring string is %d\n", total_length);
    int j=0;

    for(int i=0; i<str_length1; i++)
    {
         strAB[j++] = str1[i]; 
    }

    for(int i=0 ; i<str_length2; i++)
    {
         strAB[j++] = str2[i];   
    }
    strAB[j]='\0';

    printf("Resulting string is %s\n", strAB);

}