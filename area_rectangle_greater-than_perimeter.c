#include <stdio.h>
#include <conio.h>
int main()
{
   float length,breadth,peri,area;
   printf("Enter the length of rectangle:::");
   scanf("%f",&length);
   printf("Enter the breadth of rectangle:::");
   scanf("%f",&breadth);
   area=length*breadth;
   peri=2*(length+breadth);
   if(area>peri)
   {
      printf("area of rectangle is greater than it's perimeter.");
   }
   else
   {
      printf("area of rectangle is not greater than it's perimeter.");
   }
   getch();
}