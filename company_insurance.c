#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    char sex,marital_status;
    printf("Enter the marital status (M OR U) and sex (M OR F) and age respectively::::");
    scanf("%c%c%d",&marital_status,&sex,&age);


    if(marital_status=='M' || marital_status=='U' && sex=='M' && age>30 || marital_status=='U' && sex=='F' && age>25)
    {
        printf("\nThe driver should be insured.");

    }
    else
    {
        printf("The driver should not be insured.");
    }
    

}