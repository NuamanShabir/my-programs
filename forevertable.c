#include <stdio.h>
#include <math.h>
int main()
{
   int a,b;
   printf("enter the interger and get it's table::");
   scanf("%d",&a);
   while(a > 0 && b>0)
   {
      printf("%d %d's are %d\n",a,b++,a*b);
   }
}