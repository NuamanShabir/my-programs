#include <stdio.h>
int main()
{
   int n,d1,d2,d3,d4,d5,revn;
   printf("enter a 5 digit number:");
   scanf("%d",&n);
   d5=n%10;
   n=n/10;
   d4=n%10;
   n=n/10;
   d3=n%10;
   n=n/10;
   d2=n%10;
   n=n/10;
   d1=n%10;
   revn=d5*10000+d4*1000+d3*100+d2*10+d1;
   printf("reverse of number entered =%d\n",revn);
   if(n=revn)
   {
      printf("reverse of %d is equal to %d\n",n,revn);
   }
   else
   {
      printf("reverse of %d is not equal to %d\n",n,revn);
   }
   return 0;
}