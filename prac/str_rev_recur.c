#include<stdio.h>
int str_len(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}
void reverse(char str[], int left, int right)
{
    if(left >= right)
    {
        return;
    }
    else
    {
         char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;

         reverse( str,  left,  right);
       

    }


}
int main()
{
    char str[50];

    printf("Enter string :");
    scanf("%[^\n]", str);

    int right= str_len(str);
    int left =0;
    right = right-1;

     reverse( str, left, right);

    printf("Reversed string is %s\n", str);
}