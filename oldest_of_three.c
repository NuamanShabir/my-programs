#include <stdio.h>
#include <math.h>
int main()
{
   int nuaman,najmah,naveed;
   printf("Enter the age of nuaman,najmah and naveed respectively:::");
   scanf("%d%d%d",&nuaman,&najmah,&naveed);
   if(nuaman>najmah && nuaman>najmah)
   {
      printf("nuaman is the oldest.");
   }
   else
      if(najmah>nuaman && najmah>naveed)
      {
         printf("najmah is the oldest.");
      }
      else
         printf("naveed is the oldest.");
   return 0;
}