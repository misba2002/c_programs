#include<stdio.h>

int main()
{
    char alhab='A';

    int n;

    printf("Enter the max line: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c ", alhab);
            alhab++;
        }
        printf("\n");
    }

   

    return 0;


   
}