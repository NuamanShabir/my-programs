#include<stdio.h>
int factorial(int x);
void main() 
{
  int a;
  printf("Enter a number and get its factorial:");
  scanf("%d",&a);
  printf("fact of %d is %d ",a,factorial(a));
}
int factorial(int a)
{
  int fact=1,x;
  for(x=a;x>0;x--)
  {
    fact=fact*x;
  }
  return(fact);
}