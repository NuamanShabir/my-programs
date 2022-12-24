#include <stdio.h>
#include <math.h>
int main()
{
   float qty,rate,dis,tot;
   printf("enter the rate:::");
   scanf("%f",&rate);
   printf("enter the quantity:::");
   scanf(" %f",&qty);
   printf("enter discount (in percents):::");
   scanf(" %f",&dis);
   if(qty>1000)
   {
      dis=10;
   }
   else
   {
      dis=0;
   }
   tot=(qty*rate)-(qty*rate*dis/100);
   printf("total=%f",tot);
   return 0;
}