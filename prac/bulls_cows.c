#include<stdio.h>
#include<string.h>
void bulls_cows(const char *str, char *s, int *cows, int *bulls)
{
    if(strlen(str)!=strlen(s))
    {
        return;
    }
   int i=0;
   char cpystr[strlen(str)+1];
   strcpy(cpystr,str);
  
    while(s[i]!='\0')
    {
        if(s[i]==cpystr[i])
        {
            cpystr[i]='*';
            s[i]='*';
            (*bulls)++;
        }
       
        
        i++;
       
    }
    i=0;
    while(s[i]!='\0')
    {
       
        for(int j=0; cpystr[j]!='\0'; j++)
        {
            if(s[i]==cpystr[j] && cpystr[j]!='*' && s[i]!='*')
            {
                cpystr[j]='*';
                (*cows)++;
                break;
            }
        }
        i++;
    }
    

}
int main()
{
    char str[100], s[100];
    int cows=0,bulls=0;
    printf("Enter string 1:");
    scanf("%s",str);
    printf("Enter string 2:");
    scanf(" %s", s);
    bulls_cows(str, s, &cows, &bulls);
    printf("Bulls = %d\nCows = %d\n",bulls,cows);


}