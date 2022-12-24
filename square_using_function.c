#include<stdio.h>
int square(int a);
void main()
{
  int a;
  printf("Enter a number:");
  scanf("%d",&a);
  printf("output is %d",square(a));
}
int square(int a)
{
  int d;
  d=a*a;
  return(d);
}

