#include<stdio.h>
int length(char * str)
{
    int i=0, count=0;
    while(str[i]!='\0')
    {
        i++;
        count++;
    }
    return count;
}
int main()
{
    char str[100];

    printf("Enter your string:\n");
    scanf("%[^\n]", str);

    // printf("%s", str);

    int len = length(str);

    char f;
    printf("Enter the character you want to find :");
    scanf(" %c", &f);

    for(int i=0; str[i]!='\0'; i++)
    {
        if(f == str[i])
        {
            printf("Output : %s\n", &str[i]);
            return 0;
        }
    }
    printf("NOT found!");


}