#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main()
{
   int a;
   printf("Enter four digit pin::");
   scanf("%d",&a);
   if (a==1889)
   {
      printf("you are welcome.");
   }
   else
   {
      printf("you have entered the wrong password.");
   }
   return 0;
}