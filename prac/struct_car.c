#include<stdio.h>
#include<string.h>
typedef struct c
{
    char brand[100];
    int car_model;
    int year;
}car;
void sort_by_name(car *ref, int size)
{
    car copy[size];
    for(int i=0; i<size; i++)
    {
        copy[i]=ref[i];
    }
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(strcmp(copy[j].brand,copy[j+1].brand)>0)
            {
              car temp = copy[j];
              copy[j]=copy[j+1];
              copy[j+1]=temp;
            }  


        }

    }
    printf("After sorting by name:\n");
    printf("CAR-NAME%-10sCAR-MODEL%-10sYEAR\n","","");
    for(int i=0; i<size; i++)
    {
      printf("%-20s%-20d%-20d\n",copy[i].brand, copy[i].car_model, copy[i].year);
    }
    


}
void sort_by_year(car *ref, int size)
{
car copy[size];
    for(int i=0; i<size; i++)
    {
        copy[i]=ref[i];
    }

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(copy[j].year > copy[j+1].year)
            {
                car temp = copy[j];
                copy[j]  = copy[j+1];
                copy[j+1]= temp;

            }
        }
    }
    printf("After sorting by year:\n");
    printf("CAR-NAME%-10sCAR-MODEL%-10sYEAR\n","","");
    for(int i=0; i<size; i++)
    {
      printf("%-20s%-20d%-20d\n",copy[i].brand, copy[i].car_model, copy[i].year);
    }


}
void sort_by_car_model(car *ref, int size)
{
    car copy[size];
    for(int i=0; i<size; i++)
    {
        copy[i]=ref[i];
    }
     for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(copy[j].car_model > copy[j+1].car_model)
            {
                car temp = copy[j];
                copy[j]  = copy[j+1];
                copy[j+1]= temp;

            }
        }
    }
     printf("After sorting by model:\n");
    printf("CAR-NAME%-10sCAR-MODEL%-10sYEAR\n","","");
    for(int i=0; i<size; i++)
    {
      printf("%-20s%-20d%-20d\n",copy[i].brand, copy[i].car_model, copy[i].year);
    }



}
int main()
{
    int size;
    
    printf("Enter number of cars:\n");
    scanf("%d", &size);

    car vehi[size];

    for(int i=0; i<size; i++)
    {
      
        printf("Enter brand name car model and year of manufacturing:\n");
        scanf("%s%d%d", vehi[i].brand , &vehi[i].car_model,  &vehi[i].year);

    }
    
    int user_choice=0, count=0;
    do
    {
        printf("Enter\n1.sort by name\n2.car model\n3.year\n");
        if(scanf("%d", &user_choice)!=1)
        {
            count++;
            printf("Invalid choice!...\n");
        }
         
        if(user_choice<=0 || user_choice>3)
        { 
            count++;
            printf("Invalid choice!...\n");

        }
        if(user_choice >= 1 || user_choice <=3)
        {
            break;

        }

         




    }while(count<3);

    if(user_choice==1)
    {
       sort_by_name(vehi, size); 
    }
    else if(user_choice==3)
    {
       sort_by_year(vehi, size); 
    }
    else
    {
         sort_by_car_model(vehi,size);
    }

    




}