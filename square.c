#include <stdio.h>
#include <math.h>
int main()
{
   int first_number,exponent;
   float result;
   printf("Enter a number and it's power and i will give the value ");
   printf("\nEnter the base number:::");
   scanf("%d",&first_number);
   printf("Enter the exponent:::");
   scanf("%d",&exponent);
   result = pow(first_number,exponent);
   printf("%d to the power %d =%.2f",first_number,exponent,result);


}