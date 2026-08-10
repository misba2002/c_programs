#include<stdio.h>


int string_length(char *str)
{
    int i=0, count=0;
    while(str[i]!='\0')
    {
        i++;
        count++;
    }
    return count;
}

char * string_copy(char *strs, char *strd)
{
    int i=0;
    while(strs[i] != '\0')
    {
          strd[i]=strs[i];
          i++;
    }
    strd[i]='\0';

    return strd;


    
}
int string_cmp(char * str1, char *str2)
{
   
     int i=0;
   
   
     while(str1[i]!='\0' || str2[i]!='\0') {
        
         if(str1[i] < str2[i])
         {
            
            return -1;
         }
         if(str1[i] > str2[i])
         {
        
            return 1;
         }
         i++;
    }
    return 0;
}

void string_concatinate(char *str1 ,char *str2, char * strd)
{
   
   
    int index=0;
    for(int i=0; str1[i]!='\0'; i++)
    {
        strd[index++]=str1[i];
    }
    for(int i=0; str2[i]!='\0'; i++)
    {
        strd[index++] = str2[i];
    }
    strd[index]='\0';

    

}

char * string_substring(char *str, char *substring)
{ 
     for(int i=0; str[i]!='\0'; i++)
     {
        int j=0;
        while(substring[j] != '\0' && str[i+j] == substring[j])
        {
            j++;
        }
        if(substring[j] == '\0')
        {
            return &str[i];
        }
     }
     return NULL;
}


char *string_token(char *str, char ch)
{
   static char *strr;

   if(str != NULL)
   {
    strr = str;
   }

   if(*strr == '\0')
   {
     return NULL;
   }

   char *token =strr;
   while(*strr != '\0')
   {
     if(*strr == ch)
     {
        *strr= '\0';
        strr++;
        return token;
     }
     strr++;
   }

   return token;
}



