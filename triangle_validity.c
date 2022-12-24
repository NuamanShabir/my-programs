#include <stdio.h>
#include <conio.h>
int main()
{
   float a,b,c;
   printf("Enter the angles of traingle::::");
   scanf("%f%f%f",&a,&b,&c);
   if(a+b+c==180)
   {
      printf("Traingle is valid");
   } 
   else
   {
      printf("Traingle is not valid");
   }
   getch();
}