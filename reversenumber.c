#include <stdio.h>
#include <math.h>
int main(){
   int d1,d2,d3,d4,d5,res;
   long int input;
   long int revnum;
   printf("Enter a five digit number:::\n");
   scanf("%d",&input);
   d5=input%10;
   input=input/10;
   d4=input%10;
   input=input/10;
   d3=input%10;
   input=input/10;
   d2=input%10;
   input=input/10;
   d1=input%10;
   revnum=d5*10000+d4*1000+d3*100+d2*10+d1;
   printf("revnum=%d",revnum);
   return 0;
}