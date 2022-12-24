#include<stdio.h>
void check();
void main()
{
  check();
}
void check()
{
  int a,i;
  printf("Enter a number:");
  scanf("%d",&a);
  i=2;
  while(i<=a)
  {
    if(a%i==0)
    {
      break;
    }
    i++;
  }
  if(i==a)
  {
    printf("%d is prime number.",a);
  }
  else
  {
    printf("%d is composite number.",a);
  }

}