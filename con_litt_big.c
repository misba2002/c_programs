// AN PRG TO CONVERT LITTLE ENDIAN TO BIG ENDIAN
#include<stdio.h>
int  Convert_Endianess(int *num,int size)
{
    for(int i=0; i<size/2; i++)
    {
        char temp = *((char *)num+i);
        *((char *)num+i)= *((char *)num+(size-i-1));
        *((char *)num+(size-i-1))=temp;
       
        
    }

}
int main()
{
    int size, num;
    printf("Enter the size:");
    scanf("%d", &size);

    printf("Enter the number in hexadecimal format :");
    scanf("%x", &num);

    int *ptr=&num;

    Convert_Endianess(ptr,size);

    printf("After conversion : %X\n", num);
}
