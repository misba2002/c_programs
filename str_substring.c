#include<stdio.h>
int length(char *str)
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

    printf("Enter the string\n");
    scanf("%[^\n]", str);

    char subsr[100];
    printf("Enter the substring\n");
    scanf("%s", subsr);

    int len_str = length(str);

    int start_index=0, search_index=0, sub_str_index=0,found=0 ;

    for(int i=0; str[i]!='\0'; i++)
    {
       
        if(str[i] == subsr[0])
        {
            start_index  = i;
            // printf("start index is %d\n", i);
            search_index = i;

            while(subsr[sub_str_index]!='\0' && str[search_index] == subsr[sub_str_index] )
            {
                //  printf("substring is %c\n", subsr[sub_str_index]);
                sub_str_index++;
               
                search_index++;
                

            }
            if(subsr[sub_str_index] == '\0')
            {
                printf("output:%s\n", &str[start_index]);
                found=1;
                break;
            }
            start_index  = 0;
            search_index = 0;
            sub_str_index = 0;

            

        }
    }
    if(found == 0)
    {
        printf("NO substring found!");
    }

    return 0;

    






}