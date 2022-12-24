#include <stdio.h>
void main(){
   int a,b;
   printf("Enter an integer and get the table::::");
   scanf("%d",&a);
   for (b=1;b<=10;b++){
      printf("%d %d's are %d.\n",a,b,a*b);
      
   }
}