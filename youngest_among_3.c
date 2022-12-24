
/* IS IT A BUG LESS PROGRAM IF ANY PLEASE HIGLIGHT*/
#include <stdio.h>
#include <conio.h>
int main()
{
   int ar,as,aa;
   printf("Enter the age of ram:::");
   scanf("%d",&ar);
   printf("Enter the age of Shyam:::");
   scanf("%d",&as);
   printf("Enter the age of Ajay:::");
   scanf("%d",&aa);
   if(ar<=0 && as<=0 && aa<=0)
   {
      printf("All three of them are not born yet.");
   }
   else if(ar<=0 && as<=0 || ar<=0 && aa<=0 || as<=0 && aa<=0)
   {
      printf("Two of them is still in their mom's womb.");
   }
   else if(ar<=0 || as<=0 || aa<=0)
   {
      printf("one of them is still in his mom's womb.");
   }
   else if(ar<as && ar<aa)
   {
      printf("Ram is the youngest.");
   }
   else if (as<ar && as<aa)
   {
      printf("Shyam is the youngest.");
   }
   else if(ar==as==aa)
   {
      printf("All of them are of the same age.");
   }
   else if(as==ar)
   {
      printf("Shyam and ram are of the same age.");
   }
   else if(as==aa)
   {
      printf("shyam and ajay are of the same age.");
   }
   else if(ar==aa)
   {
      printf("Ram and Ajay are of the same age.");
   }
   else
   {
      printf("Ajay is the youngest.");
   }
   getch();
}