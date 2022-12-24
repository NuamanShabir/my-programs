#include<stdio.h>
int square();
void main()
{
  printf("square is: %d",square());
}
int square()
{
  int d,num;
  printf("Enter a number and get its square:");
  scanf("%d",&num);
  d=num*num;
  return(d);
}